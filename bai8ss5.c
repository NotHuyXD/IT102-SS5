int main(){
    int a, b, boi;
    do
    {
        printf("Hãy nhập 2 số nguyên dương: ");
        scanf("%d %d", &a, &b);
        if (a < 0 || b < 0){
            printf("Xin hãy nhập số nguyên DƯƠNG!\n");
        }
    } while (a < 0 && b < 0);
    for (int i = 1; i <=100; i++){
        if ( i%a==0 && i%b==0){
            boi = i;
            break;
        }

    }
    printf("Bội chung nhỏ nhất của %d %d là %d", a, b, boi);
    return 0;
}