#include <stdio.h>
int main(){
    int N, dig, temp, div=1;
    printf("Hãy nhập vào 1 số nguyên bất kỳ: ");
    scanf("%d", &N);
    temp =N;
    while(temp>9){
        temp/=10;
        div*=10;
    }
    while (div>0){
        dig=N/div;
        printf("%d ", dig);
        N%=div;
        div/=10;
    }
    return 0;
}