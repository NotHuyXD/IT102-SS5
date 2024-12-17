int main(){
    int a, b, uoc;
    do
    {
        printf("Hãy nhập 2 số nguyên dương: ");
        scanf("%d %d", &a, &b);
        if (a < 0 || b < 0){
            printf("Xin hãy nhập số nguyên DƯƠNG!\n");
        }
    } while (a < 0 && b < 0);
    for (int i = 1; i <=100; i++){
        if ( a%i==0 && b%i==0){
            uoc = i;
        }

    }
    printf("Ước chung lớn nhất của %d %d là %d", a, b, uoc);
    return 0;
}