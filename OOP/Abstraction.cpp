//The nessary things which the user need to know.

#include<iostream>
#include "bird.h"
using namespace std;

void birddoesSomething(Bird *&bird){
	bird->eat();
	bird->fly();
	bird->fly();
	bird->eat();
	bird->fly();
	bird->eat();
	bird->fly();
	bird->eat();
	bird->fly();
	bird->eat();
}


int main(){
	
	Bird *bird = new sparrow();
	birddoesSomething(bird);
	
	
	return 0;
}




