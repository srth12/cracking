package data;
public class stack{
int top;
void enque(int x[100],k){
top=top+1;
x[top]=k;
}

int deque(int x[100]){
top=top-1;
return x[top+1];
}
}
