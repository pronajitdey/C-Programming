#include <stdio.h>

int main() {
  int T;    // no. of test cases
  scanf("%d", &T);
  printf("\n");

  for (int i = 0; i < T; i++) {
    char str[401];
    int count[26] = {0};
    scanf("%s", str);

    int idx = 0;
    char ch = str[idx];
    while (ch != '\0') {
      count[ch - 'a']++;
      idx++;
      ch = str[idx];
    }

    int isSuperASCII = 1;
    for (int i = 0; i < 26; i++) {
      if (count[i] != 0 && count[i] != (i + 1)) {   // skip the letters whose count is 04
        printf("No\n");
        isSuperASCII = 0;
        break;
      }
    }

    if (isSuperASCII) {
      printf("Yes\n");
    }
  }

  return 0;
}