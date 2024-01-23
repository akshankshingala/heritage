/*
2. WAP to perform four different number’s sum by
inheriting constructors in hybrid inheritance.
*/

#include<iostream>

using namespace std;

	class A{
		public :
			
	int z;
	public :
	void a1(){
		
		cout<<"ENTER 1"<<endl;
		cin>>z;
		
			}
};

	class B : public A
{
	public :
	int y;
	public :
	void a2(){	
	
		cout<<"ENTER 2"<<endl;
		cin>>y;
			}
};
	class C : public A
{
	public :
		
	int x;
	
	public :
		
	void a3(){
		cout<<"ENTER 3"<<endl;
		cin>>x;
			}
};
	class D : public B,public C
{
	public :
	int u,sum=0;
	public :
	void a4(){
		cout<<"ENTER 4"<<endl;
		cin>>u;	
			}
};
	int main(){
	int sum=0;
	D d;
	d.B::a1();
	d.a2();
	d.a3();
	d.a4();
	sum=d.B::z+d.y+d.x+d.u;
	cout<<"SUM = "<<sum<<endl;
				

	return 0;
}
