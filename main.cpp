#include <iostream>
#include "quicksort.h"
using namespace std;



int main() 
{
  int A[100]={70,-2,69,-15,0,7,199,-5,78,3};
           // 0  1  2   3  4 5  6  7 8  9 
   
   for (int i=0; i<10; i++)
  {
    cout<<"|"<<A[i]<<"|";
  }
  cout<<endl;        
  ordenar(A,0,9);
   for (int i=0; i<10; i++)
  {
    cout<<"|"<<A[i]<<"|";
  }
  
  return 0;
}

