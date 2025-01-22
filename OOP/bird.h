//Vender will write the code for the developer, This is the internal implementation.

#if !defined(BIRD_H);
#define BIRD_H
#include<iostream>

class Bird{
//	this class is an interface for out side world
	public:
		virtual void eat() = 0;
		virtual void fly() = 0;
		
		//classes that inherites Bird class 
		//has to implement/write the func definaton of the virtual functions;
};

class sparrow : public Bird{
	public:
		void eat(){
			cout<<"Sparrow is eating"<<endl
		}
		void fly(){
			cout<<"Sparrow is flying"<<endl;
		}
};

class Eagle : public Bird{
	public:
		void eat(){
			cout<<"Eagle is eating:"<<endl;
		}
		void fly(){
			cout<<"Eagle is flying"<<endl;
		}
};


#endif

