#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;

void compress(char* s){
int count=0;
char* end=s;char* new_string;
//cout<<s<<"\n";
while(*end){
count=1;
while(end[0]==*(end+count))
count++;

strncat(new_string,end,1);
cout<<"  hhhhh\n";
end+=count-1;
sprintf(new_string,"%s%d",new_string,count);
count=1;

}
cout<<new_string<<"\n";
}
int main(){
cout<<"Enter a string\n";
char s1[30],s2[30];
gets(s1);
compress(s1);
}
