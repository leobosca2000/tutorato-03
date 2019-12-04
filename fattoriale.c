#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int f;
    
    printf("inserire l'argomento:");
    scanf("%d",&n);
    
    f=1;
    i=1;
    while(i <=n){
    f *=i;
    ++i;
}

    printf("Il fattoriale di %d e' %d\n", n,f);
}