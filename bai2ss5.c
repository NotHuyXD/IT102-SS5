#include <stdio.h>
int main(){
    int num=8, N;
    do {
        printf("Mời nhập vào 1 số nguyên N:");
        scanf("%d", &N);
        if (N == num){
            printf("Số nguyên trùng khớp với số nguyên có sẵn\n");
        }
        else {
            printf("Số nguyên không trùng khớp với số nguyên có sẵn\n");
        }
    }
    while (N!=num);
    return 0;
        
}