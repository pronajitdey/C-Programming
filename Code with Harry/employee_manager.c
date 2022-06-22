#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len_id;
	char *id;

	for (int i = 0; i < 3; i++)
	{
		printf("Enter the number of characters in employee ID%d: ", i + 1);
		scanf("%d", &len_id);
		id = malloc((len_id + 1) * sizeof(char));
		printf("Enter id%d: ", i + 1);
		scanf("%s", id);
		printf("Employee ID%d is: %s", i + 1, id);
		
		printf("\n=============================\n");
		free(id);
	}

	return 0;
}