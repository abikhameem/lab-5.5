//load the library
#include<iostream>
using namespace std;
//using main function
int main(){
           //giving rows
	   for(int i=0;i<5;++i){
                                for(int j=0;j<5;++j){
                                                     if(i==0||i==4||j==0||j==4)
                                                     cout<<"*";
                                                     //loop inside loop
                                                     //giving columns
                                                      else
                                                      cout<<" ";}
                                cout<<endl;}
//closing program
return 0;
}
