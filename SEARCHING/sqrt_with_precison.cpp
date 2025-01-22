//sqrt with & without precesion (logn) TC.

#include<iostream>
using namespace std;

//Without precision
int squareroot(int num){
	int s = 0;
	int e = num;
	int ans = 0;
	while(s<=e){
		int mid = s + (e - s)/2;
		if(mid * mid == num){
			return mid;
		}
		if(mid * mid < num){
			ans = mid;
			s = mid + 1;
		}
		else{
			e = mid -1;
		}
	}
	return ans;
}

//With precesion
double BSSqrtPrecision(int num) {
    double s = 0;
    double e = (double)num; // Cast to double
    double precision = 0.000000000001;
    double ans = 0;

    while (e - s > precision) {
        double mid = s + (e - s) / 2.0;

        if (mid * mid == (double)num) { // Cast to double
            return mid;
        } else if (mid * mid < (double)num) {
        	ans = mid;
            s = mid + 0.000000000000000000000000000000001;
        } else {
            e = mid - 0.000000000000000000000000000000001;
        }
    }

    return ans;
}

int main() {
    int num = 63;
    
    int sqrt = squareroot(num);
	cout<<"2:Square root is: "<<sqrt<<endl;

    double ans = BSSqrtPrecision(num);

    cout << "Square root is: " << ans << endl;

    return 0;
}


