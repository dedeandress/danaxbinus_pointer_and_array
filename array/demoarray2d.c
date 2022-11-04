#include<stdio.h>

int main(){

    int examScore[3][5];
    char namaSiswa[][20] = {"dede", "andres", "gavin", "jevan", "kevin"};
    char namaMatkul[][20] = {"algo", "cb", "bahasa inggris"};

    // algo, cb, bahasa inggris
    // dede, andres, gavin, jevan, kevin

    examScore[0][0] = 85; // nilai exam algo dede
    examScore[0][1] = 90; // nilai exam algo andres
    examScore[0][2] = 78; // nilai exam algo kevin
    examScore[0][3] = 89; // nilai exam algo gavin
    examScore[0][4] = 96; // nilai exam algo jevan

    examScore[1][0] = 78; // nilai exam cb dede
    examScore[1][1] = 90; // nilai exam cb andres
    examScore[1][2] = 87; // nilai exam cb kevin
    examScore[1][3] = 90; // nilai exam cb gavin
    examScore[1][4] = 54; // nilai exam cb jevan


    examScore[2][0] = 76; // nilai exam bahasa inggris dede
    examScore[2][1] = 90; // nilai exam bahasa inggris andres
    examScore[2][2] = 78; // nilai exam bahasa inggris kevin
    examScore[2][3] = 80; // nilai exam bahasa inggris gavin
    examScore[2][4] = 79; // nilai exam bahasa inggris jevan

    for(int i = 0; i<3; i++){
      for(int j=0; j<5; j++){
        printf("nilai %s dari %s: %d\n", namaMatkul[i], namaSiswa[j], examScore[i][j]);
      }
    }



  return 0;
}