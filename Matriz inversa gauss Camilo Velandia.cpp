/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <windows.h>
using namespace std;
//matriz invesa gauss

COORD coord=[0,0];

void gotoxy(int x, int y){
    coord.X=x;
    coord.Y=y;
SetConsoleCursorPosition(GestStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
   short int i,j,k,n;
   
   cout<<"introduzca el numero de filas y columnas de la matriz nxn:";
   cin>>n;
   
   float A[n][n], I[n][n], aux,pivote;
   
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           gotoxy (j*5,i+3);
           cin>>A[i][j];
           I[i][j]=0;
           if(i==j){
               I[i][j]=1;
           }
       }
       
       for(i=0;i<n;i++){
           pivote=A[i][j];
           for (k=0;k<n;k++){
               A[i][k]=A[i][k]/pivote;
               I[i][k]=A[i][k]/pivote;
           }
           for(j=0;i<n;j++){
               if(i!=j){
                   aux=A[j][i];
                   for(k=0;k<n;k++){ 
                       A[j][k]=A[j][k]-aux*A[i][k];
                       I[j][k]=I[j][k]-aux*I[i][k];
                   }
               }
           }
       }
       for(i=0;i<n;i++){
           for(j=0;j<n;j++){
               gotoxy (j*5,i+10);
               cout<<A[i][j];
               gotoxy (50+j*5,i+10);
               cout<<I[i][j];

           }
        }
   }
}