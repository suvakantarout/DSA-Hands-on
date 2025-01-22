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
        

    private:
        string gf;

    public: 
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
    private:
        GfChatting(){
           cout<<this->name << "Chattin with GF"<<endl;  
        }

};

int main(){
    Student S("suv",424,20,170.5,);
    cout<<S.name<<endl;
    cout<<S.gf<<endl;   //Error
    S.GfChatting;  //Error

    return 0;
}
