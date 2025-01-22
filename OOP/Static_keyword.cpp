#include<iostream>
using namespace std;

class abc{
	public:
		static int x,y;
		
		static void print()  //No this pointer accessible.
		{
			cout<< x << " "<< y <<endl;
		}
};

// (::) Scope resolution operator is used to access the data members and member functions of a class 
int abc :: x; 
int abc :: y;
 

int main(){
	abc obj1;
	obj1.x = 1;
	obj1.y = 2;
	obj1.print();
	abc obj2;
	obj2.x = 10;
	obj2.y = 20;
	obj2.print();
	obj1.print();
	
	
	return 0;
}
