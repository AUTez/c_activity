#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n()
{
    int n;
    printf("enter n: ");
    scanf("%f", &n);
    return n;
}
Triangle input_triangle()
{
    Triangle T1;
    printf("Enter base");
    scanf("%f", &T1.base);
    printf("Enter height");
    scanf("%f", &T1.altitude);
    return T1;
    }

void input_n_triangles(int n, Triangle t[n])
{
    Triangle T1;
    int n;
    for(int i = 0; i < n; ++i){
        printf("enter number of triangles");
        t[i] = input_triangle();
    }

}
void find_area(Triangle *t)
{
    t->area = 0.5 * t->altitude * t->base;
}


void find_n_areas(int n, Triangle t[n])
{
    for (int i = 0; i < n; ++i)
    {
        find_area(&t[i]);
    }

}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle smallest = t[0];
    for (int i = 1; i < t; ++i)
    {
        smallest = t[i];
    }

}
void output(int n, Triangle t[n], Triangle smallest)
{
    printf("the smallest triangle has:\n");
    printf("base: %2.f", smallest.base);
    printf("height: %2.f", smallest.altitude);
    printf("area: %2.f", smallest.area);
}

int main()
{
    int n = input_n();
    Triangle tri[n];
    input_n(n, tri);
    find_area(n, tri);
    Triangle small = find_smallest_triangle(n, tri);
    output(n, tri);
    return 0;
}