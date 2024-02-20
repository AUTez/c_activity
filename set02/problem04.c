#include <stdio.h>

int input_array_size()
{
    int n;
    printf("enter array size");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n])
{
for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
}
}
int sum_composite_number(int n,int a[n])
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int number = a[i];
        if (number > 1){
            int composite = 0;
            for (int t = 2; t <= number / 2; ++t){
                if (number % t == 0 )
                {
                    composite = 1;
                    break;
                }
                if(composite){
                    sum += number;
                }

            }
        }
    }
    
}

void output(int sum)
{
    printf("the sum of %d numbers is %d",sum);
}

int main()
{
    int size = input_array_size();
    int array[size];
    input_array(size, array);
    int sum = sum_composite_number(size, array );
    output(sum);
    return 0;
}