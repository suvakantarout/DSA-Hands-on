// Macro is used for the reusability of the code in anywhere in the program
//Macro --> Preprocessor directive
//Extension for Macro --> .h 
//Mcro Header file --> #include "macroname.h"

#include<iostream>
using namespace std;
//Macros
#define PI = 3.14
#define MAX(x,y)(x > y ? x : y)  //if x > b print x else print b

float circleArea(float r){
	return PI * r * r;
}

float circleperimeter(float r){
	return 2 * PI * r;
}

void fun(){
	int x = 6;
	int b = 17;
//  int c = x > b ? x : b;  //if x > b print x else print b
	int c = MAX(x,b);
} 

void fun2(){
	int y = 50;
	int z = 80;
//  int c = y > z ? y : z;  //if x > b print x else print b
	int c = MAX(y,z);
} 


int main(){
	
	fun();
	fun2();
	float r = 5;
	cout<<"Ciecle Area: "<<circleArea(r)<<endl;
	cout<<"Circle perimeter: "<<circleperimeter(r);
	
	return 0;
}
