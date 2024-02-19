#include <stdio.h>

int input_side()
{
    float a;
    printf("enter one side of the triange \n");
    scanf("%f", &a);
    return a;
}
int check_scalen(float a, float b, float c)
{
    if (a != b && a != c && b != c)
    {
        printf("triange is scalen");
    }
    else
    {
        printf("triange is not scalen");
    }
    return 0;
}
int main()
{
    float n1, n2, n3;
    n1 =input_side();
    n2 = input_side();
    n3 = input_side();
    check_scalen(n1, n2, n3);
    return 0;

}
//done 