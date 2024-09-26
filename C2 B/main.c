#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("entrez le nombre:\t");
    scanf("%d",&n);
    int fact = n;
    while(n>1){
        fact=fact *(n-1);
        n=n-1;
    }
    printf("%d",fact);
    return 0;
}
