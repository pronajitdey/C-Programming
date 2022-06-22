// The letter.txt template is used to generate a bill in bill.txt file

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

char *replace_word(const char *str, const char *oldWord, const char * newWord);

int main(void)
{
    char str[300];
    FILE *file1 = fopen("letter.txt", "r");
    if (file1 == NULL)
    {
        return 1;
    }
    fgets(str, 300, file1);

    // Prompt user to input data
    char name[20], item[40], outlet[50];
    printf("Enter the name of customer: ");
    gets(name);
    getch();
    printf("Enter the item purchase: ");
    gets(item);
    getch();
    printf("Enter the outlet: ");
    gets(outlet);
    getch();

    // Call replace_word function and generate new_str
    char *new_str;
    new_str = replace_word(str, "{{name}}", name);
    new_str = replace_word(new_str, "{{item}}", item);
    new_str = replace_word(new_str, "{{outlet}}", outlet);

    FILE *file2 = fopen("bill.txt", "w");
    fprintf(file2, "%s", new_str);

    printf("The generated bill has been written to the file 'bill.txt'\n");

    fclose(file1);
    fclose(file2);

    return 0;
}


char *replace_word(const char *str, const char *oldWord, const char * newWord)
{
    char *resultString;
    int i, count = 0;
    int oldWordLength = strlen(oldWord);
    int newWordLength = strlen(newWord);

    //Lets count the number of times old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        // strstr returns a ptr to the first occurence of oldWord in the string starting from str[i]
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            // Jump over the word (since i gets incremented due for loop so we need to subtract 1)
            i = i + oldWordLength - 1;
        }
    }

    // Making a new string to fit in the new word
    resultString = (char *) malloc(i + count * (newWordLength - oldWordLength));

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i++;
            str ++;
        }
    }
    resultString[i] = '\0';

    return resultString;
}

