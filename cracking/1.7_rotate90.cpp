#include<iostream>
#include<stdlib.h>

using namespace std;

void rotateMatrix(int a[100][100],int n){
int temp1,temp2;
for(int i=0;i<=(n-1)/2-n%2;i++){
for(int j=0;j<=(n-1)/2;j++){
temp1=a[j][n-i-1];
a[j][n-i-1]=a[i][j];
temp2=a[n-i-1][n-j-1];
a[n-i-1][n-j-1]=temp1;
temp1=a[n-j-1][i];
a[n-j-1][i]=temp2;
a[i][j]=temp1;
}
}

}

int main(){
int n=4;
int a[100][100];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
a[i][j]=(i+1)*(j+1)*2*(i+1);
}
cout<<"Matrix before rotating\n";
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
cout<<a[i][j]<<" ";
cout<<"\n";
}

rotateMatrix(a,n);
cout<<"Matrix after rotating\n";
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
cout<<a[i][j]<<" ";
cout<<"\n";
}
}
