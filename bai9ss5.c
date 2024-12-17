#include <stdio.h>
int main(){
    int a, b, c, num, choice;
    while (choice != 6){
        printf("MENU \n","\n");
        printf("\n1.Nhập 3 số\n");
        printf("2.Tổng 3 số\n");
        printf("3.Trung bình cộng 3 số\n");
        printf("4.Số nhỏ nhất\n");
        printf("5.Số lơn nhất\n");
        printf("6.Thoát\n");
        printf("\nLựa chọn của bạn: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Mời nhập 3 số bất kỳ: ");
            scanf("%d %d %d", &a, &b, &c);
            printf("\n");
            continue;
        case 2:
        num = a+b+c;
        printf("Tổng 3 số là: %d\n", num);
        continue;
        case 3:
        num = (a+b+c)/3;
        printf("Trung bình cộng 3 số là: %d\n", num);
        continue;
        case 4:
        int min;
        min = a;
        if (min < b){
            min =b;
        }
        if (min < c){
            min=c;
        }
        printf("Số nhỏ nhất trong 3 số là %d\n", min);
        continue;
        case 5:
        int max;
        max = a;
        if (max < b){
            max = b;
        }
        if (max > c){
            max=c;
        }
        printf("Số lớn nhất trong 3 số là: %d\n", max);
        continue;
        case 6: break;
        default: printf("Lựa chọn không hợp lệ\n");
            continue;
        }
    }
    return 0;
    
}