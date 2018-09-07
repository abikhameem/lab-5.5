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
                                           if(j>=i&&i+j<(5+2*i))
                                           cout<<"*";
                                           else
                                           cout<<" ";}
                          cout<<endl;}
//closing programme
return 0;
}

