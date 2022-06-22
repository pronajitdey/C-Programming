#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **s, int i, int j);
void reverse(char **s, int start, int end);
int next_permutation(int n, char **s);

int main(void)
{
    char **s;
    int n;
    scanf("%d", &n);
    s = calloc(n, sizeof(char*));
    for (int i = 0; i < n; i++)
    {
        s[i] = calloc(11, sizeof(char));
        scanf("%s", s[i]);
    }
    do
    {
        for (int i = 0; i < n; i++)
            printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
    } while (next_permutation(n, s));
    for (int i = 0; i < n; i++)
        free(s[i]);
    free(s);
    return 0;
}

void swap(char **s, int i, int j)
{
    char *tmp1 = s[i];
    s[i] = s[j];
    s[j] = tmp1;
}

void reverse(char **s, int start, int end)
{
    while (start < end)
    {
        // Change start and end position after each swap (post_increment)
        swap(s, start++, end--);
    }
}

int next_permutation(int n, char **s)
{
    /**
    * Complete this method
    * Return 0 when there is no next permutation and 1 otherwise
    * Modify array s to its next permutation
    */

    // Find the largest index i such that s[i] < s[i + 1]
    int i = 0;
    while (strcmp(s[i], s[i + 1]) >= 0)
    {
        // If s[i] >= s[i + 1], then skip to the next index
        i++;

        // If there is no index such that s[i] < s[i + 1], it means no more permutations are possible
        if (i + 1 >= n)
        {
            return 0;
        }
    }
    for (int x = 0; x < n; x++)
    {
        if ((x + 1) < n && strcmp(s[x], s[x + 1]) < 0)
        {
            i = x;
        }
    }

    // Find the largest index j greater that i such that s[i] < s[j]
    int j = 0, k;
    for (k = 0; k < n; k++)
    {
        if (k > i && strcmp(s[i], s[k]) < 0)
        {
            j = k;
        }
    }

    if (strcmp(s[i], s[j]) < 0)
    {
        // Swap the values of s[i] with that of s[j]
        swap(s, i, j);

        // Reverse the sequence after i-index s[i] to the final element
        reverse(s, i + 1, n - 1);

        return 1;
    }

    return 0;
}