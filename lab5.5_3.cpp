//load the library
#include<iostream> 
using namespace std;
int main(){
	  
           //giving rows
	   for(int i=0;i<5;++i){
                                for(int j=0;j<5;++j){
                                                     if(i==0||i==4||j==0||j==4||
                                                     i==1 && j==1 || i==3 && j==1 ||i==2 && j==2    || i==1 && j==3 ||i==3 && j==3 )cout<<"*";else cout<<" ";} cout<<endl;}
//closing program
return 0;
}
