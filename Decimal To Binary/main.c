#include <stdio.h>

int main(){
  int N, remainder = 0, binary = 0, position=1;
  printf("Enter decimal number: ");
  scanf("%d", &N);

  while (N != 0)
  {
    remainder = N%2;
    N = N/2;
    binary = binary+remainder*position;
    position *= 10;
  }
  
  printf("Binary number is: %d\n\n", binary);

  return 0;
}