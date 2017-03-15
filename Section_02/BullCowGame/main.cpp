#include "main.h"

int main() 
{
	do
	{
		Intro();
		PlayGame();
	} 
	while (isPlayingAgain());
	
	return 0;
}

//Game Loop
void PlayGame()
{
	constexpr int PLAYER_OPS = 5;
	for (int i = 1; i <= PLAYER_OPS; i++)
	{
		Print(GetGuess());
	}
}

bool isPlayingAgain()
{
	cout << "Are you playing again? (y/n)\n";
	string Response = "";
	getline(cin, Response);

	return Response[0] == 'y' || Response[0] == 'Y';
}

//Introduce the game
void Intro()
{
	constexpr int WORLD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows\n";
	cout << "Can you guess the " << WORLD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";

	return;
}

//Get the guess from the player
string GetGuess()
{
	cout << "Enter your guess: \n";
	string Guess = "";
	getline(cin, Guess);

	return Guess;
}

void Print(string Guess)
{
	//Repeat the guess back to the player
	cout << "Player's guess: " << Guess << "\n";
}