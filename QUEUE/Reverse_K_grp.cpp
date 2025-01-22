#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void ReverseKgrp(queue<int>& q, int k, int size) {
    if (size < k) {
        return; // Base case: If remaining size is less than k, no further processing
    }

    stack<int> st;

    // Push the first k elements into the stack
    for (int i = 0; i < k; i++) {
        int ele = q.front();
        q.pop();
        st.push(ele);
    }

    // Pop from the stack and push into the rear of the queue
    while (!st.empty()) {
        int ele = st.top();
        st.pop();
        q.push(ele);
    }

    // Move the remaining elements to the back of the queue
    int remaining = size - k;
    for (int i = 0; i < remaining; i++) {
        int ele = q.front();
        q.pop();
        q.push(ele);
    }

    // Recursive call for the remaining elements
    ReverseKgrp(q, k, remaining);
}

void print(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.push(110);

    int k = 3;
    int size = q.size();
    ReverseKgrp(q, k, size);
    print(q);

    return 0;
}

