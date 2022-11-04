#include<stdio.h>

void add(int *total, int x){
    *total += x;
}

int main(){

  int foo = 10;

  add(&foo, 5);

  printf("foo : %d", foo);

  return 0;
}