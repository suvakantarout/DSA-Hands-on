#include<iostream>
using namespace std;
int x = 2;   //Global variable
void fun(){
	int x = 50;  //Local variable
	cout<<x<<endl;
	::x = 10;    //Upadat local variable using (            ::)
	cout<< ::x<<endl;  //Accessing the global var with ::(Scope resolution operator)
}

int main(){
	
	fun();
	::x = 100;
	cout<< ::x <<endl;
	
	{ //Scope
		int x = 70; 
		{ //Scope
			int x = 200;   // Most recent global variable will print first
			cout<<x<<endl;
		}
		cout<<x<<endl;
		cout<<::x<<endl;
	}
	return 0;
}
