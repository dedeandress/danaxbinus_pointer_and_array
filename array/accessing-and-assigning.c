#include<stdio.h>

int main(){
  int foo[] = {4, 5, 54, 7};
//
//  printf("foo[0] = %d\n", foo[0]);
//  printf("foo[1] = %d\n", foo[1]);
//  printf("foo[2] = %d\n", foo[2]);
//  printf("foo[3] = %d\n", foo[3]);

//
//  printf("\n\nAssigning Array\n");

  foo[0] = 3;
  printf("foo[0] = %d\n", foo[0]);

  foo[4] = 5;
  printf("foo[4] = %d\n", foo[4]);

  return 0;
}