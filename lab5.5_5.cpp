//load the library
#include<iostream>
using namespace std;
//using  main function
int main(){
          //declare variables
          int i,j;
          //applay conditions and displaying pattern
          for(i=0;i<5;i++){
                          for(j=0;j<9;++j){
                                           if((i+j)==4||(i+j)==8||(i==0&&j>3)||(i==4&&j<5))
                                           cout<<"*";
                                           else
                                           cout<<" ";}
                                           cout<<endl;}
//closing programme
return 0;
}
