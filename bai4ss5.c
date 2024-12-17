#include <stdio.h>
int main(){
    int N, form;
    do
    {
        printf("Mời nhập vào 1 số nguyên từ 1 đến 10:");
        scanf("%d", &N);
        if (0>N || 10<N)
        {
            printf("Chỉ nhập số có giá trị từ 1 đến 10!\n");
        }
        
    } while (0>N || 10<N);
    for (int i = 1; i <= 10; i++)
    {
        form = N * i;
        printf("%d * %d = %d\n", N, i, form);
    }
    
    
}