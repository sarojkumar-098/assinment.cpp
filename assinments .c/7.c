#include<stdio.h>
void test(void);
int a;
int main()
{
    int a=5;
    printf("%d\n",a);
    test();
    
}
void test()
{
    printf("%d\n",a);
}