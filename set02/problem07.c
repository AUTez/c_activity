#include <stdio.h>

typedef struct _triangle
{
	float base, height, area;
}Triangle;

Triangle input()
{
	Triangle T1;
	printf("enter base");
	scanf("%f", &T1.base);
	printf("enter height");
	scanf("%f", &T1.height);
	return T1;
}
void area(Triangle * T1)
{
	T1->area = 0.5 * T1->base * T1->height;
}
void output(Triangle T1)
{
	printf("The area of the traingle is %f", T1.area);
}
int main()
{
	Triangle t;
	t = input();
	area( &t);
	output(t);
	return 0;

}
