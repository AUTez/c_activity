#include <stdio.h>

int input_number()
{
    int a;
    printf("enter two number :"); 
    scanf("%d", &a);
    return a;
}
int find_hcf(int b, int c)
{
    int hcf;
    for(int i = 1; i <= b || i <= c; ++i){
        if(b % i == 0 && c % i == 0){
            hcf = i;
        }
    }
    return hcf;

}
void output(int b, int c, int hcf)
{
    printf("the HCF of %d and %d is %d", b, c, hcf);
}
int main()
{
    int b, c, hcf;
    b = input_number();
    c = input_number();
    hcf = find_hcf(b, c);
    output(b, c, hcf);
    return 0;
}