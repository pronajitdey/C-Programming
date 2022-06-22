#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *computer_choice(void);
int winner(char *user_choice, char *comp_choice, char *username);

int main(void)
{
	char username[20], user_choice[10];
	int user_score = 0, comp_score = 0;

	printf("Enter username: ");
	gets(username);
	printf("\n============================\n");

	// Play the game five times
	for (int i = 0; i < 5; i++)
	{
		printf("%s : ", username);
		gets(user_choice);

		// Ensure computer enter a different choice
		char *comp_choice = computer_choice();
		while (strcmp(user_choice, comp_choice) == 0)
		{
			comp_choice = computer_choice();
		}

		printf("Computer : %s\n", comp_choice);

		if (winner(user_choice, comp_choice, username) == 1)
		{
			user_score++;
		}
		else
		{
			comp_score++;
		}
	}

	if (user_score > comp_score)
	{
		printf("%s wins\n", username);
	}
	else
	{
		printf("Computer wins\n");
	}

	return 0;
}

// Generate random choice of computer
char *computer_choice(void)
{
	srand(time(NULL));
	int comp_choice = rand() % 3;

	if (comp_choice == 0)
	{
		return "rock\0";
	}
	else if (comp_choice == 1)
	{
		return "paper\0";
	}
	else
	{
		return "scissor\0";
	}
}

// Play game
int winner(char *user_choice, char *comp_choice, char *username)
{
	if (strcmp(user_choice, "rock") == 0 && strcmp(comp_choice, "paper") == 0)
	{
		printf("Computer gets point\n");
		printf("\n============================\n");
		return 2;
	}
	else if (strcmp(user_choice, "rock") == 0 && strcmp(comp_choice, "scissor") == 0)
	{
		printf("%s gets point\n", username);
		printf("\n============================\n");
		return 1;
	}
	else if (strcmp(user_choice, "paper") == 0 && strcmp(comp_choice, "rock") == 0)
	{
		printf("%s gets point\n", username);
		printf("\n============================\n");
		return 1;
	}
	else if (strcmp(user_choice, "paper") == 0 && strcmp(comp_choice, "scissor") == 0)
	{
		printf("Computer gets point\n");
		printf("\n============================\n");
		return 2;
	}
	else if (strcmp(user_choice, "scissor") == 0 && strcmp(comp_choice, "rock") == 0)
	{
		printf("Computer gets point\n");
		printf("\n============================\n");
		return 2;
	}
	else if (strcmp(user_choice, "scissor") == 0 && strcmp(comp_choice, "paper") == 0)
	{
		printf("%s gets point\n", username);
		printf("\n============================\n");
		return 1;
	}
}
