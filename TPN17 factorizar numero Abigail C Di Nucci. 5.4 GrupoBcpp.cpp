#include<bits/stdc++.h>
using namespace std;
int Factorial(int num);
int main(){
 int num;
 cout<<"Ingrese un numero:"<<endl;
 cin>>num;
 int factor=Factorial(num);
 cout<<"El numero factorizado es:"<<factor<<endl;
 return 0;
}
int Factorial(int num){
 int f=1;
     for(int i=1; i<=num;  i++)
	 {
   f=f*i;
  }
 return f;
}
