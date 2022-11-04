#include<stdio.h>

int main(){

  int array[5] = {10, 5, 3, 9, 10};

  printf("array ke-1 : %d\n\n", array[1]);

  *(array+1) = 99;

  printf("array ke-1 : %d\n", array[1]);

  for(int i = 0; i<5; i++){
    printf("alamat array ke-%d: %d\n", i, &array[i]);
  }

  printf("=========================\n");

  for(int i = 0; i<5; i++){
    printf("alamat array ke-%d: %d\n", i, &array+i);
  }

  return 0;
}