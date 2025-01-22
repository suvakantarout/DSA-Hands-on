#include<iostream>
using namespace std;
class funcoverloading{
	public:
		int sum(int x, int y){
			return x + y;
		}
		int sum(int x,int y,int z){
			return x + y + z;
		}
		
		double sum(double x, double y){
			return x + y;
		}
		
		float sum(float x, float y,float z,float m){
			return x + y + z + m;
		}
};


int main(){
	
	funcoverloading FL;
	cout<<FL.sum(5,5)<<endl;
	cout<<FL.sum(5,5,5)<<endl;
	cout<<FL.sum(5.5567788,9.55598978)<<endl;
	cout<<FL.sum(2.4,5.6,7.8,9.0)<<endl;
	
	return 0;
}
