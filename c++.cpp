
//copy constructor

#include<bits/stdc++.h>
using namespace std;


class Point{
	int x_;
	int y_;
	public:
	Point(int x, int y):x_(x),y_(y){
		cout << "Point Ctor : "<<" not copy";
		print();
		cout<<"\n";
	}

	Point():x_(0),y_(0){
		cout << "Point Ctor : ";
		print();
		cout<<"\n";
	}
	Point(const Point& p):x_(p.x_),y_(p.y_){
		cout << "Point CCtor : ";
		print();
		cout<<"\n";
	}
	~Point(){
		cout << "Point dtor : ";
		print();
		cout<<"\n";
	}

	void print(){
		cout << "(" << x_ <<", "<<y_<<" )";
	}

};

class Rect{
	Point TL_;
	Point BR_;
	public:
	Rect(int tlx , int tly , int brx , int bry):TL_(tlx,tly),BR_(brx,bry){
		cout << "Rect Ctor : ";
		print();
		cout<<"\n";
	}
	Rect(const Point& p_t1 , const Point& p_br):TL_(p_t1),BR_(p_br){
		cout << "Rect Ctor : c";
		print();
		cout<<"\n";
	}
	Rect(const Point& p_t1, int brx , int bry):TL_(p_t1),BR_(brx,bry){
		cout << "Rect Ctor : ";
		print();
		cout<<"\n";
	}
	Rect(){
		cout << "Rect Ctor : ";
		print();
		cout<<"\n";
	}
	Rect(const Rect& r):TL_(r.TL_),BR_(r.BR_){
		cout << "Rect Ctor : ";
		print();
		cout<<"\n";
	}
	~Rect(){
		cout << "Rect Dtor : ";
		print();
		cout<<"\n";
	}
	void print(){
		cout <<"[";
		TL_.print();
		cout<<" ";
		BR_.print();
		cout<<" ]";
	}
};



int main(){
	freopen ("output.txt","w",stdout);
	Rect r1(0,2,5,7);
	Rect r2(Point(3,5),Point(6,9));
	Rect r3(Point(2,2),6,4);
	Rect r4;

}





// initialisation in class - restrictions

// #include<iostream>
// using namespace std;

// class check{
// 	public:
// 	int data ;
// 	int kata ;
// 	check(int i , int j):data(i),kata(j){};
// 	check():data(0),kata(0){};
// 	// try and remove this constructor u will find error
// 	//above contructor helps when we have both initialiazed  array

// 	int view(){
// 		return this->data + this->kata ;
// 	}
// 	float View(){
// 		return this->data + this->kata ;
// 	}
// };

// int main(){
// 	check c1(1,2);

// 	int check ::* a;
// 	int check ::* b;
// 	int (check :: *fun)();
// 	a = &check::data;
// 	b = &check::kata;
// 	fun = &check::view;
// 	cout<<"obj.data : "<<c1.*a<<"\tobj.kata : "<<c1.*b<<"\n";
// 	cout<<(c1.*fun)()<<"\tfunction\n";
// }



// #include<bits/stdc++.h>

// using namespace std;

// int main() {
// int *p[5];
// int a[5] = {5,4,3,2,1};
// for(int i = 0 ; i< 5 ; i++){
// 	p[i] = (a+i); 
// }
// for(int i = 0 ; i < 5 ; i++){
// 	cout<<*p[i]<<" ";
// }

// }


/*
//friend function
#include<bits/stdc++.h>
using namespace std;

class myclass{
	int a,b;
	public :
	friend int sum(myclass x);
	myclass(int a1,int b1):a(a1),b(b1){};
};
int sum(myclass x) // sum is friend of class my class it can directly access 
                   // private variable
     { 
		 return x.a + x.b ; 
	};
int main(){
	myclass n(4,4);
	cout<<sum(n)<<"\n";
}
*/
/*
//lecture-30
//constatness of object
#include<iostream>
using namespace std;
class myclass
{
private:
	int primember;
public:
int pubmember;
	myclass(int pu,int pub):primember(pu),pubmember(pub){};
	int getmember()const {
		return primember;
	}
	void setmember(int i){
		primember=i;
	}
	void print() const {
		cout<<primember<<" , "<<pubmember<<"\n";
	}
};
int main(){
	const myclass my(5,6);
	myclass cl(7,8);
	cl.setmember(0);
	cout<<my.getmember();
	cout<<"\n";
	cout<<cl.getmember();
}

/*
//copy constructor and constructor practice
//lecture 28
#include<iostream>
using namespace std;
class Point {
	private:
		int x_;
		int y_;
	public :
		Point(int x,int y):x_(x),y_(y){
			cout<<"cotr with int int called:";
			print();
		}
	    Point():x_(0),y_(0){
	    	cout<<"cotr with default called:";
	    	print();
		}
		Point(const Point& c):x_(c.x_),y_(c.y_){
			cout<<"cotr with default called:";
			print();
			
		}
		void print(){
			cout<<"( "<<x_<<"  ,"<<y_<<")";
		}
};
class Rect{
	private:
		Point TL_;
		Point BR_;
	public:
		Rect(){
			cout<<"default contr";
			print();
			cout<<endl;
		}
		Rect(int tlx,int tly,int brx,int bry):TL_(tlx,tly),BR_(brx,bry){
			cout<<"constructor of rect with four parameter called:";
			print();
			cout<<endl;
		}
		Rect(const Point& TL,int brx,int bry):TL_(TL),BR_(brx,bry){
			cout<<"constructor of rect with one copy and two point parameter called:";
			print();
			cout<<endl;
		}
		Rect(Point TL,Point BR):TL_(TL),BR_(BR){
			cout<<"rect copy constructor called:";
			print();
			cout<<endl;
		}
		Rect(const Rect& r) : TL_(r.TL_),BR_(r.BR_){
			cout<<"rect copy constructor called:";
			print();
			cout<<endl;
		}
	void print(){
		cout<<"[ ";
		TL_.print();
		BR_.print();
		cout<<" ]"<<endl;
	}
};
int main(){
	Rect r1(0,2,5,7);
	Rect r2(Point(3,5),Point(6,9));
	Rect r3(Point(2,2),6,4);
	Rect r4;
	return 0;
}



/*
//copy constructor
#include<iostream>
using namespace std;
class Complex{
	private:
		double re_;
		double im_;
	public:
		Complex(double re,double im):re_(re),im_(im){
			cout<<"complex constructor called"<<endl;
		}
		Complex(const Complex& c):re_(c.re_),im_(c.im_){
			cout<<"Complex copy constructor"<<endl;
		}
		void print(){
			cout<<"complex object is:"<<re_<<" + "<<" j"<<im_<<endl;
		}
		~Complex() {
			cout<<" Distructor called: ";
			print();
		}
};
void display( Complex c_param){
	cout<<"Display :";
	c_param.print();
}
int main(){
	Complex c1={1.2,1.5};
	Complex c2(c1);
	Complex c3=c2;
	c1.print();
	c2.print();
	c3.print();
	display(c1);
	return 0;
	
}


/*
//parameterised constructor
#include<iostream>
class Complex{
	private:
		double re;
		double im;
	public:
		Complex (double re_=10.0,double in_=20.1) :re(re_),im(in_){
			std::cout<<"constructor called double:\n";
		}
		Complex (int re_=10.0,int in_=20.1) :re(re_),im(in_){
			std::cout<<"constructor called int :\n";
		}
		Complex (double re_,int in_) :re(re_),im(in_){
			std::cout<<"constructor called:\n";
		}
		void print(){
			std::cout<<re<<" + "<<"j"<<im<<"\n";
		}
		
};
int main(){
	//Complex c;
	Complex d[2];
    d[0].print();
    c[1].print();
}


/*
#include<iostream>
#include<string>
using namespace std;
class Stack{
	private:
		char *data;
		int top;
	public:
		Stack(size_t = 10);
	bool empty(){
			return top==-1;
	}
	void push(char x){
		data[++top]=x;
	}
	void pop(){
		top=top-1;
	//	cout<<top;
	}
	char Top(){
		return data[top];
	}	
};
Stack::Stack(size_t s):top(-1),data(new char[s]){
cout<<"consructor called:";
}
int main(){

	char str[7]="GAURAV";
	Stack s(strlen(str);
	int i=0;
//	for (i=0;i<6;i++){
//		s.push(str[i]);
//	}
		while(!s.empty()){
			cout<<s.Top();
			s.pop();
		}
}


/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	long long num=1534236469;
	long long  rev=num;
	int l=0;
	for(l=0;rev!=0;l++){
		rev=rev/10;
		printf("%lld ",rev);
	}
	printf("%d\n",l);
	int *rem=(int*)malloc(l*sizeof(int));
	long long result=0;
	int i=0;
	while(num%10!=0 || num){
		rem[i]=num%10;
		num=num/10;
		i=i+1;
	}
	int j=0;
	int k=i;
	int exp=k-1;
	long long power=1;
	for(j=0;j<i;j++){
		printf("%d ",rem[j]);
		while(exp!=0){
			power=power*10;
		}
		result=result+rem[j]*power;
		k=k-1;
	}
	printf("\n%ld",result);
}



/*
#include<stdio.h>
int main(){
	int a[15]={1,1,1,2,2,2,3,3,4,5,5,5,6,7,7};
	int i=0;
	int k=0;
	//int len=0;
	for(i=0;i<14;i++){
		if(a[i] !=a[i+1]){
			a[k++]=a[i];
		//	k=k++;
			printf("k=%d\n",k);
		}
	}
	a[k++]=a[i];
	printf("k=%d\n",k);
	for(i=0;i<k;i++){
		printf("%d ",a[i]);
	}
}


/*
#include<iostream>
using namespace std;
class Test{
	private:
	int read;
	int write;
	int readwrite;
	public:
	void display(){
		read=10*write;
		cout<<"value of read:"<<read<<"\n";
	}
	int Write(int x){
		write=x;
		return write;
	}
	int Readwrite(int x){
		readwrite=x;
		readwrite=readwrite+write;
		return readwrite;
	}
};
int main(){
	Test T;
	int xwrite=10;
	int xreadwrite=20;
	int y=T.Write(xwrite);
	int z=T.Readwrite(xreadwrite);
	T.display();
	cout<<"value of write:"<<y<<endl;
	cout<<"value of readwrite:"<<z<<endl;
	
}


/*
#include<iostream>
#include<cmath>
using namespace std;
class complex{
	private :
		int re;
		int im;
	public:
		int norm(complex& t){
			return (re*re+im*im);
		}
};
void print(complex& t){
	cout<<t.re<<"+j"<<t.im<<endl;
}
int main(){
	complex c={1,2};
	print(c);
	cout<<c.norm(c);
}


/*
//class
#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
class point{
	public:
	int x;
	int y;
}; 
class rect{
	public:
	point TL;
    point BR;
	void compute_Area(){
	cout<<abs(TL.x-BR.x)*abs(TL.x-BR.x);
}
};

int main(){
	rect r={ {1,1} , {2,2} };
	r.compute_Area();
}
/*
#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
typedef struct{
	int x;
	int y;
}Point; 
typedef struct{
	Point TL;
	Point BR;
}Rect;
void compute_Area(Rect c){
	cout<<abs(c.TL.x-c.BR.x)*abs(c.TL.x-c.BR.x);
}
int main(){
	Rect r={{1,1},{2,2}};
	compute_Area(r);
}


/*
#include<iostream>
int main(){
	int *p= new int[3];
	int i=0;
	p[0]=1;
	*(p+1)=2;
	*(p+2)=3;
	for(i=0;i<3;i++){
		std::cout<<"  "<<*(p+i);
	}
	delete []p;
}


/*
//operator function
#include<iostream>
struct data{
	int a;
	int b;
}D;
int operator+(D.a, D.b){
	return a-b;
}
int operator-(int a, int b){
	return a+b;
}
int main(){
	int a=10,b=20;
	int A=a+b;
	int S=a-b;
	std::cout<<"A is:"<<A;
	std::cout<<"\ns is:"<<S;
}




/*
#include<iostream>
int sum(int a,int b){
	return a+b;
}
double sum(double a,double b){
	return a+b;
}
int sum(int a,double b){
	int c=a+b;
	return c;
}
int main(){
	int c=sum(3,4);
	std::cout<<"both int:"<<c;
	double b;
	b=sum(7.111,8.444);
	std::cout<<"\nboth double:"<<b;
	c=sum(4,5.4);
	std::cout<<"\nint and float:"<<c;
}




/*

//function overloading (by no of parameter)
#include<iostream>
float area(int l,int b){
	float c = l*b;
	return c;
}
float area(int b){
	float c=b*b;
	return c;
}
int main(){
	int a=3,b=4;
	float c = area(a,b);
	std::cout<<"area rect : "<<c;
	c=area(a);
	std::cout<<"\narea squr : "<<c;
}


  
/*
//default parameter
#include<iostream>
int add(int a,int b=20){
	return a+b;           // default parameters should at right end
}                      //and after that no normal para meter should be present
int main(){
	int z, x=5,y=6;
	z =  add(x);
	std::cout<<z<<" only x\n"; 
		z =  add(x,y);
	std::cout<<z<<" both \n";
		z =  add(y);
	std::cout<<z<<" only y\n";
}



/* address function
#include<iostream>
using namespace std;
int& return_ (int &a){
	int t=a+1;
	cout<<"address of a:"<< &a <<"\n";
	cout<<"value of a:"<< a <<"\n";
	return t;
}

int main(){
	int b=10;
	
	cout<<"address of b:"<< &b <<"\n";
	cout<<"value of b:"<< b <<"\n";
	int &c=return_ (b);
	cout<<"address of c:"<< &c <<"\n";
	cout<<"value of c:"<< c <<"\n";
	return_ (b)=3;
		cout<<"value of b(in returbn):"<< c <<"\n";
}





/*
// return by reference is differtent from return by value
#include<iostream>
using namespace std;
void sum(int &a){
	a = a + a;
}
int main(){
	int n=4;
	sum(n);
	cout<<n;
}


/*
// reference variable
#include<iostream>
using namespace std;
int main(){
	int i=5;
	int j=6;
    const  int &k=i+j;
	cout<<"i:"<<(++j)<<" k:"<<k;
}






/*#include<iostream>
inline int sum(int a,int b){
	int c=a+b;
	return c;
}
int main(){
	int a,b;
	std::cout<<"enter no:";
	std::cin>>a;
	std::cin>>b;
	int c=sum(a,b);
	std::cout<<"\nsum is:"<<c;
	int i=15;
	int &j=i;
	std::cout<<"\naddress of j(ref var):"<<&j<<" value of j :"<< j <<"address of i:"<<&i<<"value of i:"<<i;
	return 0;
}*/
