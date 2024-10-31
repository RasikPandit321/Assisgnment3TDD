#include<string.h>


const char* winner(const char* Player1, const char* Player2)
{
	//code to check if Player1 chooses Rock and Player2 chooses Scissors then Player1 will win
	if (strcmp(Player1, "Rock") ==0 && strcmp(Player2, "Scissors") ==0)
	{
		return"Player1 won the match";
	}
}
