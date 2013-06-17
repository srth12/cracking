#include<iostream>
using namespace std;
struct obj{
int top;
int key[100];
};

class stack{

public:

void enque(struct obj * x,int k){
x->top = x->top+1;
x->key[x->top]=k;
}
int deque(struct obj* x){
x->top=x->top-1;
return x->key[x->top+1];
}
};

int main(){
obj xx;
xx.top=-1;
stack s;
s.enque(&xx,1);
s.enque(&xx,5);
cout<<s.deque(&xx)<<"\n";
}
