/*1. WAP to print rate of interests of different banks using
hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes*/

#include<iostream>

using namespace std;

class RBI
{
	public :
	void get(){
		int rate=8;

	}
};

class SBI : public RBI
{
	public :
			int rate=8;
	void getsbi(){
				cout<<"The Rate of Interest in SBI Bank is : "<<rate<<" % "<<endl;
	}
};


class BOB : public RBI
{
		public :
	void getbob(){
		
				int rate=8;
	
			
				cout<<"The Rate of Interest in BOB Bank is : "<<rate<<" % "<<endl;
	}
};
class ICICI : public RBI
{
		public :
	void geticici(){
				int rate=8;
			cout<<"The Rate of Interest in ICICI Bank is : "<<rate<<" % "<<endl;	
	}
};

int main(){
	RBI r;
	SBI s;
	BOB b;
	ICICI i;
	s.getsbi();
	b.getbob();
	i.geticici();
	return 0;
}
