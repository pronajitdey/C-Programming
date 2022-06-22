#include <stdio.h>
#include <string.h>

int main() {
  int T;    // no. of test cases
  scanf("%d", &T);

  for (int t = 0; t < T; t++) {
    char original[100001];    // original string
    char input[100001];   // entered string
    scanf("%s", original);
    scanf("%s", input);

    int count = 0;
    int i = 0, j = 0;
    while (i < strlen(original) && j < strlen(input)) {
      if (original[i] == input[j]) {    // if chars match, move on to the next char of both the strings
        i++;
        j++;
      } else {    // if chars don't match, move on to the next char of input string to compare
        j++;
        count++;
      }
    }

    // if input string contains all the letters required to be changed into original string, then i reaches end of original string
    // if input string can't be changed then j moves all along input string but i doesn't
    if (i == strlen(original)) {
      printf("Case #%d: %d\n", t + 1, count + strlen(input) - j);
      // we add strlen(input) - j to count because the i may reach strlen(original) before j
      
    } else {
      printf("Case #%d: IMPOSSIBLE\n", t + 1);
    }
  }
}