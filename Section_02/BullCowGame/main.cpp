#include <iostream>
#include <string>
using namespace std;


void PrintIntro();

string GetGuess();

void PlayGame();

bool AskToPlayAgain();


int main()
{
	bool bPlayAgain = false;
	do
	{
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} 
	while (bPlayAgain);
}

//Funtions
void PrintIntro()
{
	// Introduce the Game
	constexpr int Word_Length = 5;
	cout << "Welcome to Bulls and Cows! A boring word game.\n";
	cout << "Can you guess the " << Word_Length;
	cout << " letter isogram? \n";
	cout << endl;
	return;
}

string GetGuess()
{
	//Get Player's Guess
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}

void PlayGame()
{
	constexpr int Number_Of_Turns = 5;
	//Loop for max number of guesses
	for (int count = 1; count <= Number_Of_Turns; count++)
	{
		string Guess = GetGuess();
		cout << "Your guess was: " << Guess << endl;
		cout << endl;
	}
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again?" << endl;
	string Responce = "";
	getline(cin, Responce);
	return (Responce[0] == 'y') || (Responce[0] == 'Y');
	cout << endl;
}
