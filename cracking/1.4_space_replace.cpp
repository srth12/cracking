#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;

void replace(char* s){
int count=0;
char* end=s;
cout<<s<<"\n";
while(*end){
 
 if(strncmp(end," ",1)==0){
  count++;}
 end++;
}
end--;
count*=2;
while((end+count)>=s){
 
 if(strncmp(end," ",1)==0){
 *(count--+end)='0';
  *(count--+end)='2';
  *(count+end)='%';
    --end;
 }
 else{
  *(count+end)=*end;
  end--; 
 }
}

cout<<++end<<"\n";


}

int main(){
cout<<"Enter a string\n";
char s1[30],s2[30];
gets(s1);
replace(s1);
}


