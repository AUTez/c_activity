#include <stdio.h>
#include <string.h>

void enter_string(char *str)
{
    char a;
    printf("enter string \n");
    scanf("%s",str);
}
void reverse(char *str, char *reverse)
{
    int leni = strlen(str);
    for (int i=0; i < leni; i++)
    {
        reverse[i] = str[leni - 1 - i];
    }
    reverse[leni] = '\0';
}

void output(char *str, char *reverse)
{
    printf("String entered is %s\n", str );
    printf("the reversed version is %s\n", reverse);
}

int main()
{
    char str[1000], reversea[1000];
    enter_string(str);
    reverse(str, reversea);
    output(str, reversea);
    return 0;

}