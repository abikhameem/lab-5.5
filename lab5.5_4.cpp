#include<iostream>
using namespace std;
//using  main function
int main(){
           //declaring variables
          int i,j;
          //for loop
          for(i=0;i<5;i++){
              
               //for loop within for loop
               for(j=0;j<11;j++){
                      
                         //condition
                         if(j>=(6-i) && j<=(10-i))
                           //print
                           cout<<"*";
                         //if first conditon is not true
                         else
                           //print
                           cout<<" ";
               }
               //move to other row
               cout<<endl;
         
           }
//closing program
return 0;
}
