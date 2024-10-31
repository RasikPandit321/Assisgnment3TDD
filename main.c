#include<string.h>


const char* winner(const char* Player1, const char* Player2)
{
	//code to check if Player1 chooses Rock and Player2 chooses Scissors then Player1 will win
	if (strcmp(Player1, "Rock") ==0 && strcmp(Player2, "Scissors") ==0)
	{
		return"Player1 won the match";
	}
	//code to check if Player1 chooses Rock and Player2 chooses Paper then Player2 will win
	if (strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Paper") == 0)
	{
		return"Player2 won the match";
	}
	//code to check if Player1 chooses Rock and Player2 chooses Rock then Draw
	if (strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Rock") == 0)
	{
		return"Draw";
	}
	//code to check if Player1 chooses Scissors and Player2 chooses Rock then Player2 will win
	if (strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Rock") == 0)
	{
		return"Player2 won the match";
	}
	//code to check if Player1 chooses Scissors and Player2 chooses Paper then Player2 will win
	if (strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Paper") == 0)
	{
		return"Player1 won the match";
	}
	//code to check if Player1 chooses Scissors and Player2 chooses Scissors then Player2 will win
	if (strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Scissors") == 0)
	{
		return"Draw";
	}
	//code to check if Player1 chooses Paper and Player2 chooses Rock then Player2 will win
	if (strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Rock") == 0)
	{
		return"Player1 won the match";
	}
	//code to check if Player1 chooses Paper and Player2 chooses Scissors then Player2 will win
	if (strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Scissors") == 0)
	{
		return"Player2 won the match";
	}
	//code to check if Player1 chooses Paper and Player2 chooses Paper then Player2 will win
	if (strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Paper") == 0)
	{
		return"Draw";
	}

}
