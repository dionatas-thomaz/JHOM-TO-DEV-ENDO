#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

int b=0;


  srand(time(NULL));
  b = rand() % 100 ;

 printf("%d",b);

    return 0;
}