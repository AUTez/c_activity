#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
    float inp, sqrrt;
    inp=input();
    sqrrt=square_root(inp);
    output(inp,sqrrt);
}

float input()
{
    float inp;
    printf("enter the number:");
    scanf("%f", &inp);
    return inp;
}

float square_root(float n) 
{
  float x = n, y = 1, epsilion = 0.00000001;
  {
    while ( x - y > epsilion)
    {
      x = (x + y) / 2;
      y = n/ x;
    }
  }
  return x;
}

void output(float n, float sqrroot)
{
  printf("the squareroot of %f is %f", n, sqrroot);
}
//done
