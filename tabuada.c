#include <stdio.h>

int main ()
{
int n1, n2 ,total;
 printf("|    Tabuada do 1 ao 9           |\n");

  for(n1=1; n1<10; n1++) {
    for(n2=1; n2<11; n2++) {
        total=n1*n2;
            printf("%d x %d = %d\n\n",n1, n2, total);

    }
 }

 return 0;
}
