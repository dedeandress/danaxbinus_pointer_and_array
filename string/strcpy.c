#include<stdio.h>
#include<string.h>

int main(){

    char foo[20] = "Hello";
    char bar[20];

    strcpy(bar, foo);

    printf("foo: %s\n", foo);
    printf("bar: %s\n", bar);

    return 0;
}