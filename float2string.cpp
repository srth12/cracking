#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main(){
float input,decimal;
char buf[20];
cout<<"Enter the input\n";
cin>>input;
int nonDecimal=(int)input,temp,count=0;
decimal=(float)(input-nonDecimal);
cout<<decimal<<"\n"<<nonDecimal<<"\n";
    
    temp=nonDecimal;
    while(temp!=0){
    temp/=10;
    count++;
    }
    int i=0;
    while(nonDecimal!=0){
    buf[i]=(char)(nonDecimal/pow(10,--count))  ;
    ++i;
    nonDecimal/=pow(10,count);
    
    }
    cout<<"\npower:"<<buf;
    
}
