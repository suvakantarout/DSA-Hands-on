#include <iostream>
#include <stack>
//#include<queue>
using namespace std;

int main() {
    stack<int> s;
    stack<int> s1;
//    queue<int>q;
    
    // Push elements into stack s
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // Move elements from s to s1 (to simulate enqueue)
    while (!s.empty()) {
        s1.push(s.top());
        s.pop();
	}   
	
//	Move all the elements from s1 -> q
//	while(!s1.empty()){
//		q.push(s1.top());
//		s1.pop();	
//	}
//	
    // Printing the "queue" using s1 (which now behaves like a queue)
//    cout << "Queue elements: ";
//    while (!q.empty()) {
//        cout << q.front() << " ";
//        q.pop();
//    }
    
	// Printing the "queue" using s1 (which now behaves like a queue)
    cout << "Queue elements: ";
    while (!s1.empty()) {
        cout << s1.top() << " ";
        s1.pop();
    }

    cout << endl;
    
    return 0;
}

