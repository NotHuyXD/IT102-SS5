#include <stdio.h>
int main(){
    int N, tong;
    do
    {
       printf("Mời nhập vào 1 số nguyên dương:");
       scanf("%d", &N);
       if (N<0){
        printf("Xin hãy nhập số nguyên DƯƠNG!\n");
       }
    } while (N<0);
    for (int i = 1; i <= N; i++)
    {
        tong += i;
    }
    printf("Tổng các số từ 1 đến %d là: %d", N, tong);
    return 0;
    
    
    
}