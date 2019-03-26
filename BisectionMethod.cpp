#include<iostream>
#include<cmath>
using namespace std;

double a = 0;
double b = 0;
double c = 0;
double e = 0;
double equation(double x){
	double ans = 0;
	ans =(x*x*x*x)-x-10;
	return ans;
}


int main(){

	while(true){
		cout<<"set A:";
		cin>>a;
		cout<<"set B:";
		cin>>b;
		cout<<"set E:";
		cin>>e;
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<e<<endl;
		if(equation(a)*equation(b) < 0){
			cout<<"fuck";
			break;
		}
	}
	while(true){
		cout<<"loop"<<endl;
		c = (a+b)/2;
		if(equation(c)*equation(a) < 0){
			b = c;
			cout<<"b::"<<b<<endl;
		}else{
			a = c;
			cout<<"a::"<<a<<endl;
		}
		cout<<"c:: "<<c<<endl;
		if(abs(equation(c)) < e){
			cout<<"value x::"<<c<<endl;
			break;
		}
	}
}
