#include<iostream>
#include<stack>
#include<climits>
using namespace std;

bool SortedOrNot(stack<int> &s, int element1) {
    // Base case: If stack is empty, it's sorted
    if (s.empty()) {
        return true;
    }
    
    // Pop the top element of the stack
    int element2 = s.top();
    s.pop();
    
    // Recursively check the rest of the stack
    if (element2 < element1) {
        bool aageKaAns = SortedOrNot(s, element2);
        // If the remaining stack is sorted, return true, otherwise false
        return aageKaAns;
    } else {
        // If the current element is greater than or equal to the previous one, it's not sorted
        return false;
    }
}

int main() {
    stack<int> s;
    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);
    
    int element1 = INT_MAX; // Start with maximum integer for the first comparison
    cout << (SortedOrNot(s, element1) ? "Stack is sorted" : "Stack is not sorted") << endl;
    
    return 0;
}

