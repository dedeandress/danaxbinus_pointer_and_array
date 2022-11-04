#include<stdio.h>

int main(){
  int x;

  int *ptr;
  ptr = &x; //ini kita mengeset variable ptr dengan alamat dari x

  printf("alamat dari x: %d\n", &x);
  printf("value dari ptr: %d\n", ptr);

  *ptr = 24;
  printf("value dari x: %d", x);

  return 0;
}