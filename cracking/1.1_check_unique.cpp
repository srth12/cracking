#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
cout<<"Enter  a string\n";
char input[15];
cin>>input;
//cout<<input<<"\n";

bool ascii[256]={0};
//cout<<*(1+ascii)<<"\n";

int i=0;
while( input[i] != NULL){
int j=input[i];

if(ascii[j] ==1){
cout<<"Not unique\n";
exit(0);
}
else{
ascii[j]=1;
}
i++;
}
cout<<"Unique\n";
}

