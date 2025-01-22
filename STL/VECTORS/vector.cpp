#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	vector<int> distance(5,-1); //vector size is 5,Having -1 in every box.
	cout<< *(distance.begin())<<endl;
	cout<< *(distance.end())<<endl;
	cout<< distance.size() <<endl;
	
	vector<int> v;  //create integer type vector
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	cout<< v.size()<<endl;
	
	v.pop_back();
	v.pop_back();
	cout<<v.size()<<endl;
	
	cout<< v.front()<<endl;
	cout<< v.back()<<endl;
	
	if(v.empty() == true){
		cout<<"Vector is empty"<<endl;
	} 
	else{
		cout<<"Vector is not empty"<<endl;
	}
	
	
	v[3] = 50;
	cout<<v[3]<<endl;
	
	//SWAP TWO VECTORS
	distance.swap(v);
	cout<< distanc[0]<<" "<<distance[1]<<" "<<distance[2]<<" "<<distance[3]<<" "<<distance[4]<<" "<<endl;
	
	v.swap(distance);
	cout<< v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<" "<<endl;
	
	return 0;
}


