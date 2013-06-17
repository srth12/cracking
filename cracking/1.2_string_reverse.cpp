#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

void reverse(char* s){
int count=0;
while(*(s+count) != '\0' ){
count++;
}
cout<<count<<"\n";
while(count>=0)
{
cout<<*(s+count-1);
count-=1;
}
cout<<"\n";
}

int main(){
cout<<"Enter a string\n";
char s[30];
cin>>s;
reverse(s);
}

