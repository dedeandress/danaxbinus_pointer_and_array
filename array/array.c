#include<stdio.h>

int main(){

  int x[20];

  x[0] = 24;
  x[1] = 13;
  x[2] = 100;

  printf("x[0] = %d\n", x[0]);
  printf("x[1] = %d\n", x[1]);
  printf("x[2] = %d\n", x[2]);

  int foo[] = {4, 5, 54, 7};
  int bar[5] = {4, 5, 54, 7};

  printf("foo[0] = %d\n", foo[0]);
  printf("foo[1] = %d\n", foo[1]);
  printf("foo[2] = %d\n", foo[2]);
  printf("foo[3] = %d\n", foo[3]);


  printf("bar[0] = %d\n", bar[0]);
  printf("bar[1] = %d\n", bar[1]);
  printf("bar[2] = %d\n", bar[2]);
  printf("bar[3] = %d\n", bar[3]);


  return 0;
}