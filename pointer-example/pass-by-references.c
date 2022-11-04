#include<stdio.h>

void swap(int a, int b){
  int temp;

  temp = a;
  a = b;
  b = temp;

}

int main(){

  int foo = 20;
  int bar = 25;

  printf("foo value before swap: %d\n", foo);
  printf("bar value before swap: %d\n", bar);

  //swap value
  swap(foo, bar);

  printf("foo value before swap: %d\n", foo);
  printf("bar value before swap: %d\n", bar);

  return 0;
}