#include <stdio.h>
#include <string.h>
void main()
{ char Name[60], G[5], answer[10];
  int i;
  do
  {
    printf("Kimino No Namai Wa? ");
    scanf("%s", Name);
    do
    {
      printf("What is your blood group [A, B, AB, or O]? ");
      scanf("%s", G);

      if (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 )
        printf("Blood group %s is incorrect! Please try again.\n", G);
    }  while (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 );
    if (strcmp(G,"A") ==0)
    {
      printf("%s, A. Hey, you can give blood to: A, AB.\n", name);
      printf("  You can receive blood from: A, O.\n");
    }
    else if (strcmp(G, "B") ==0)
    {
      printf("%s, B. Well, you can give blood to: B, AB.\n", name);
      printf("  You can receive blood from: B, O.\n");
    }
    else if (strcmp(G, "AB") == 0)
    {
      printf("%s, AB. Oh my Sissyyyy, you can give blood only to: AB.\n", Name);
      printf("  Opps, you can receive blood from all: O, A, B, AB.\n");
    }
    else
    {
      printf("%s, O. Nice! You can give blood to all: O, A, B, AB\n", name);
      printf("  But Sad! You can receive blood only from: O\n");
    }
    printf("\nContinue (YES for Yes)? ");
    scanf("%s", answer);
  } while (strcmp(answer, "YESsss") == 0);
  printf("Adjö\n");
}
