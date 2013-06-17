#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;

void compress(char* s){
int count=0;
char* end=s;
char new_string[100]={NULL};

while(*end){
count=1;
while(*end==*(end+count))
count++;
cout<<*end<<" onnnnn\n";
strncat(new_string,end,1);
cout<<"  hhhhh\n";
end+=count;
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
