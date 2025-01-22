#include<iostream>
#include<thread>   //Header for thread
using namespace std;
void TaskA(){
	for(int i = 0; i<10; i++){
		cout<<"TaskA"<<endl;
		
	}
}

void TaskB(){
	for(int i = 0; i<10; i++){
		cout<<"TaskB"<<endl;
	}
}




int main(){
	thread t1(TaskA);
	thread t2(TaskB);
	
	t1.join();  //t1 will wait for t2
	t2.join();	// t2 will wait for t1
	return 0;
}
