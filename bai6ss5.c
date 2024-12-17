#include <stdio.h>
int main(){
    int a, b, num, choice;
    printf("Mời nhập vào 2 số nguyên bất kỳ: \n");
    scanf("%d %d", &a, &b);
    while (choice!=5)
    {
        printf("CALCULATOR\n");
    printf("\n1.Tổng 2 số\n");
    printf("2.Hiệu 2 số\n");
    printf("3.Tích 2 số\n");
    printf("4.Thương 2 số\n");
    printf("5.Thoát\n");
    printf("\nLựa chọn của bạn: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        num = a + b;
        printf("Tổng 2 số là %d\n", num);
        continue;
        case 2:
        num = a-b;
        printf("Hiệu 2 số là %d\n", num);
        continue;
        case 3:
        num = a*b;
        printf("Tích 2 số là %d\n", num);
        continue;
        case 4:
        num = a/b;
        printf("Thương 2 số là %d\n", num);
        continue;
        case 5:
        break;
    
    default: printf("Lựa chọn không hợp lệ");
        continue;
    }
    return 0;

    }
    
    
}