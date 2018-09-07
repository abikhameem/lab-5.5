//inlude libray
#include<iostream>
using namespace std;
//declare main function
int main(){
//declare variables
          int i,j;
          //applay conditions&displaying pattern
          for(i=1;i<6;++i){
                          for(j=1;j<10;j++){
                                           if(i+j==2*i||(i+j==(4+2*i)&&j==i+4)||i==1&&j<6||i==5&&j>4)
                                           cout<<"*";
                                           else
                                           cout<<" ";}
                          cout<<endl;}
//closing programme
return 0;
}

