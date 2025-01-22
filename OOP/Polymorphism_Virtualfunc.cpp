#include<iostream>
using namespace std;
class shape{
	public:
		virtual void draw(){    //(Late binding -> Binded at Runtime)
			cout<<"Generic drawing..."<<endl;
		}
};

class circle : public shape{
	public:
		void draw(){
			cout<<"Circle drawing..."<<endl;
		}
		
};
class rectangle : public shape{
	public:
		void draw(){
			cout<<"Rectangle drawing..."<<endl;
		}
		
};

//void ShapeDrawing(shape *s){  
//	s->draw();    //shape class pointer(Early Binding -> Binded at compile time)
//}


int main(){
	shape *s; //Base class pointer
	
	circle c;  //Derived class Object
	s = &c;    //Base calss pointer -> Derived class object
	s->draw();
	
	rectangle r;
	s = &r;
	s->draw();

//	ShapeDrawing(&c);   //shape method is printing
//	ShapeDrawing(&r);   // Also the shape method is printing
	return 0;
}
