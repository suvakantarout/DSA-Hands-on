//MAP is basically make the searching faster in a vector,array,list,priority_queue.

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	//Declare
    unordered_map< int, int> um;
    
    //Insert
    um[1] = 53;
    um[2] = 47;
    um[3] = 20;
    um[4] = 49;
    um[5] = 100;
	
//	traverse
    unordered_map<int, int>::iterator it;
    for(it = um.begin(); it <= um.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }
    
//    find key
    if(um.find(4) != um.end()){
		int value = desk_map[2];
		cout<< value<<end;
	}
	else{
		cout<<"Not found"<<endl;
	}
	
//	Erase key
	um.erase(4);
	
//	After erase again traverse
	cout<<"After erase"<<endl;
	unordered_map<int, int>::iterator it;
    for(it = um.begin(); it <= um.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }
	
	
    return 0;  
}


