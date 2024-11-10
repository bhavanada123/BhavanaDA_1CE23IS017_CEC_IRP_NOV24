#include<stdio.h>
void foo();
void bar(int);

int main()
{
    void(*q)()=&bar;
    printf("start of main\n");
    q();
    foo(12);
    foo(1);
    q();
    printf("\nend of main\n");
    return 0;
}
void foo()
{
    printf("\nfoo func\n");
}
void bar(int x){
    printf("\nbar func %d\n",x);
}