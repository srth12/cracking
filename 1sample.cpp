#include<iostream>
#include <stdio.h>
using namespace std;

//int main(){
//int x=0;
//printf("%d,%d,%d",x,x++,++x);
//}


 void swap(int &a,int &b){
        
        int temp;
        temp=a;
        a=b;
        b=temp;
        }
        int main(){
        
        int a=3,b=4;
        cout<<a<<b;
        swap(a,b);
        
        cout<<a<<b;
        }
