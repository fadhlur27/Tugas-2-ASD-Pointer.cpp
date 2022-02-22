#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	int *p1,*p2,*p3;
	
	a=10;
	cout<<"nilai a :"<<a<<endl<<endl;
	cout<<"Alamat A"<<&a<<endl;
	
	b=15;
	cout<<"nilai b :"<<b<<endl<<endl;
	cout<<"Alamat B"<<&b<<endl;
	
	p1=&b;
	cout<<"nilai p1 :"<<*p1<<endl<<endl;
	cout<<"Alamat p1"<<p1<<endl;
	
	p2=p1;
	cout<<"nilai p2 :"<<*p2<<endl<<endl;
	cout<<"Alamat p2"<<p2<<endl;
	
	c=27;
	cout<<"nilai c :"<<c<<endl<<endl;
	cout<<"Alamat C"<<&c<<endl;
	
	p1=&c;
	cout<<"nilai p1 :"<<*p1<<endl<<endl;
	cout<<"Alamat p1"<<p1<<endl;
	
	a=*p1;
	cout<<"nilai a :"<<a<<endl<<endl;
	cout<<"Alamat A"<<&a<<endl;
	
	p3=&b;
	cout<<"nilai p3 :"<<*p3<<endl<<endl;
	cout<<"Alamat p3"<<p3<<endl;
	
	*p2=8;
	cout<<"nilai p2 :"<<*p2<<endl<<endl;
	cout<<"Alamat p2"<<p2<<endl;
	
	p1=&a;
	cout<<"nilai p1 :"<<*p1<<endl<<endl;
	cout<<"Alamat p1"<<p1<<endl;
	
	p2=&b;
	cout<<"nilai p2 :"<<*p2<<endl<<endl;
	cout<<"Alamat p2"<<p2<<endl;
	
	*p1=c;
	cout<<"nilai p1 :"<<*p1<<endl<<endl;
	cout<<"Alamat p1"<<p1<<endl;
	
	a=*p2;
	cout<<"nilai a :"<<a<<endl<<endl;
	cout<<"Alamat A"<<&a<<endl;
	
	b=6;
	cout<<"nilai b :"<<b<<endl<<endl;
	cout<<"Alamat B"<<&b<<endl;
	
	p3=&b;
	cout<<"nilai p3 :"<<*p3<<endl<<endl;
	cout<<"Alamat p3"<<p3<<endl;
	
	p3=&c;
	cout<<"nilai p3 :"<<*p3<<endl<<endl;
	cout<<"Alamat p3"<<p3<<endl;
	
	*p1=*p3;
	cout<<"nilai p1 :"<<*p1<<endl<<endl;
	cout<<"Alamat p1"<<p1<<endl;
	
	a=b;
	cout<<"nilai a :"<<a<<endl<<endl;
	cout<<"Alamat A"<<&a<<endl;
	
	*p2=*p3;
	cout<<"nilai p2 :"<<*p2<<endl<<endl;
	cout<<"Alamat p2"<<p2<<endl;
	
	return 0;
}
