#include<iostream>
#include<string.h>
using namespace std;

class Student{
    public:
        // Attributes
        string name;
        int id;
        int age;
        float height;
        
		//Defult Constructor
		Student(){
			cout<< this->name <<"Student defult constructor"<<endl;
		}

		//Parameterised Constructor
		Student(string name, int id, int age,float height){
			cout<<"Student parameterised constructor called"<<endl;
			this->name = name;
			this->id = id;
			this->age = age;
			this->height = height;
		}
		
		//Copy constructor
		Student( const Student &srcobj){  //srcobj = B
			cout<<"Student copy constructor called"<<endl;
			this->name = srcobj.name;
			this->id = srcobj.id;
			this->age = srcobj.age;
			this->height = srcobj.height;
		}
		

        // behaviour / methods/ Functions
        void study(){
            cout<< this->name << "is studing"<<endl;
        }
         void sleep(){
            cout<< this->name << "is sleeping"<<endl;
        }
         void bunk(){
            cout<< this->name << "is Bunking"<<endl;
        }
        
        //Destructor
        ~Student(){
        	cout<< this->name << "default destructor"<<endl;
		}

};

int main(){
//	Default constructor
    Student s;
    s.name = "Rhaul ";
    s.id = 2;
    s.age = 20;
    s.height = 157.7;
    s.study();
    
    Student a;
    a.name = "Sonu ";
    a.id = 3;
    a.age = 21;
    a.height = 159.7;
    a.bunk();
	
	cout<<endl;
//    Prameterrised Constructor
    Student B("Suv ", 4, 30, 185.3);
    Student C("Adi ", 5, 31, 145.3);
    cout<<B.name<<B.age<<endl; 
    B.study();
    C.sleep();
    
    cout<<endl;
//    Copy Constructor
    Student D = B;
    cout<<D.name << " "<< B.name<<endl;
    cout<<D.age<<" "<<B.age<<endl;
    
    

    return 0;
}
