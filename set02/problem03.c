#include <stdio.h>
int input_number()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    return a;

}
int is_composite(int a)
{
    int i;
    for (i = 2; i <= a / 2; ++i){
        if (a % i == 0){
            return 1;
        }
    }
    return 0;
}
void output(int n, int result)
{
    if (result == 1){
        printf("the number is composit");
    }
    else {
        printf("the number is not composite");
    }

}
int main()
{
    int b, res;
    b = input_number();
    res = is_composite(b);
    output(b, res);
    return 0;
}