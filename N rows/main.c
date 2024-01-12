#include <stdio.h>

int main(){
  int N;

  printf("Enter number of rows: ");
  scanf("%d", &N);

  for (int i = N; i > 0; i--)
  {
    printf("1");

    for (int j = 2; j <= i; j++)
    {
      if (i == N)
      {
        printf("%d", j);
      } else {
        if (j != i)
        {
          printf(" ");
        } else {
          printf("%d", j);

        }
        

      }
      
    }
    printf("\n");
    
  }

  return 0;
}