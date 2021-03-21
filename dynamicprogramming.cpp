

//ugly number
#include<bits/stdc++.h>
using namespace std;
int Divide(int a, int b) 
{ 
while (a%b == 0) 
a = a/b; 
return a; 
}	
bool IsUgly(int no) 
{ 
no = Divide(no, 2); 
no = Divide(no, 3); 
no = Divide(no, 5); c
	
return (no == 1)? 1 : 0; 
}
int Nugly(int n){
	int i=1;
	int count = 1;
	while(count < n){
		i++;
		if(IsUgly(i)){
			count++;
		}
	}
	return i;
}
int main(){
	int n = 8;
	cout<<n <<" ugly no is: "<<IsUgly(n)<<endl;
	cout<<"8 ugly"<<Nugly(8);
}







/*
#include<iostream>
void fib(int n){
	long long lookup[n+1];
	lookup[0] = 0;
	lookup[1] = 1;
	for(int i =2;i<n;i++){
		lookup[i] = lookup[i-1] + lookup[i-2];
	}
	std::cout<<"fibonaci sequence of "<<n<<" : ";
	for(int i = 0;i<n;i++){
		std::cout<<lookup[i]<<" ";
	}
}
int main(){
	int n = 100;
	fib(n);
}


/*
//fibonaci series using dynamic programming (memorisation)
// also called top-down approach
#include<iostream>
#define NIL -1
#define MAX 100

int lookup[MAX];
void initialise(int n){
	for(int i=0;i<n;i++){
		lookup[i] = NIL;
	}
}
int fib(int n){
	if(n<=1){
		lookup[n] = n;
	}
	else{
		lookup[n] = fib(n-1) + fib(n-2);
	}
	return lookup[n];
}
int main(){
	int n = 20;
	initialise(n);
	int fibo = fib(n);
	std::cout<<"fibonaci Sequence "<<n<<" : ";
	for(int i=0;i<n;i++){
		std::cout<<lookup[i]<<" " ;
	}
}

*/



