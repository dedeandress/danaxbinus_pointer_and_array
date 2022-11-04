#include<stdio.h>
#include<string.h>

int main(){
  char foo[20] = "Hello World";
  char bar[20] = "Hello World";

//  if(foo == bar) {
//    printf("equal");
//  }else {
//    printf("not equal");
//  }
  if(strcmp(foo,bar) == 0) {
    printf("equal");
  }else {
    printf("not equal");
  }



  return 0;
}