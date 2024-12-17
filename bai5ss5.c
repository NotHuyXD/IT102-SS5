#include <stdio.h>
int main(){
    int N, form;
    while(N<=9){
    for (int i = 1; i <= 10; i++)
    {
        form = N * i;
        printf("%d * %d = %d\n", N, i, form);
    }
    N++;
    }
    return 0;
    
    
}