#include <stdio.h>
void input(float *base, float *height)
{
    printf("enter base");
    scanf("%f", base);
    printf("enter height");
    scanf("%f", height);
}
void find_area(float base , float height, float *area)
{
     *area = (base * height) / 2.0;
}
void output(float base, float height, float area)
{
    printf("the area of triangle with base %.2f and height %.2f is %.2f", base, height, area);
}
int main()
{
    float base, height, area;
    input(&base, &height);
    find_area(base, height, &area);
    output(base, height, area);
    return 0;

}