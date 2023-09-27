#include <stdio.h>

int main (){

char s[20];

printf(" digite algo (convencional):\n");
scanf("%s", s);
fflush(stdin);

printf("resultado: %s\n\n",s);

printf(" digite algo (aprim.):\n");
fgets (s,20,stdin);

printf ("result: %s\n\n",s);
fflush (stdin);

    return 0;
}