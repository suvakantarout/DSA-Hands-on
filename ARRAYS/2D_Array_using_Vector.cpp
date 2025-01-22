//Linear Search in 2D Array using Vector

#include<iostream>
#include<vector>
using namespace std;

bool Search2DArray(vector<vector<int> > v, int target,int rowsize,int columnsize){
	
    for(int i = 0; i < rowsize; i++){
        for(int j = 0; j < columnsize; j++){
            if(v[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int> > v(2, vector<int>(3, 11));
    int rowsize = v.size();
    int columnsize = v[0].size();
    cout<<"Enter vector elements:"<<endl;
    for(int i = 0; i < rowsize; i++){
        for(int j = 0; j < columnsize; j++){
            cin >> v[i][j];
        }
        cout << endl;
    }
    int target; 
    cout<<"Enter searching target:";
    cin>>target;
    
    bool ans = Search2DArray(v, target,rowsize,columnsize);
    cout << "Ans: " << ans << endl;
    return 0;
}


