#include<stdio.h>

int main(){
    int foo[10] ;

    foo[10] = {25, 45, 78, 99};  // <- error because array is pointer constant cannot assign with new value on run time
    foo = {25, 45, 78, 99}; // <- error because array is pointer constant cannot assign with new value on run time
    foo[12] = 77; // <- error because max 9
    foo[5] = 78; // <- ok array is pointer constant but array can be filled on run time with pointer variable

    return 0;
}