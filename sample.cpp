#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;

class Person{
public:
 Person(){cout<<"parent"<<endl;}
virtual void hello(){cout<<"hi dude!"<<endl;}
};

class Student: public Person{
public:
Student(){cout<<"Student"<<endl;}
void hello(){cout<<"Hello world!"<<endl;}
};

int main(){
//char i[10]="Abcd";
//if("hello"=="hellos"){cout<<"success\n";}
//else{cout<<"not success\n";}
//int s=i[0];//stores ascii value
//cout<<s<<i<<"\n";
if(cout<<"hello\n"){}

Person* s=new Student();
s->hello();


int i=5;
printf("Amazon:%d",i=++i==6);
int x=15;
//printf("\n%d,%d,%d,%d,%d\n",x,x!=15,x=40,x,x<30);
printf("\nhai:%d,%d\n",x<15,x=40);

int k=(1,2,3);
cout<<"k="<<k;

x=0;
printf("\n%d,%d,%d\n",x++,++x,++x);

}
