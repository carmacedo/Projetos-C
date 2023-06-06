#include <stdio.h>
#include <stdlib.h>

int main()
{
     char nomeMes[12][3] = {"jan", "fev", "mar", "abr", "mai",
    "jun", "jul", "ago", "set", "out", "nov", "dez"};

  for (int i=0; i<12; i++) {
    printf("%2d-", (i+1));

    for (int j=0; j<3; j++)
      printf("%c", nomeMes[i][j]);

    printf("\n");
  }
}

