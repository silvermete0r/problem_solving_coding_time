// link: https://leetcode.com/problems/implement-queue-using-stacks

class MyQueue {
public:
    vector<int> vec;
    MyQueue() {
    }
    
    void push(int x) {
        vec.push_back(x);
    }
    
    int pop() {
        int val = vec[0];
        vec.erase(vec.begin(), vec.begin()+1);
        return val;
    }
    
    int peek() {
        return vec[0];
    }
    
    bool empty() {
        if(vec.empty()) return true;
        else return false;
    }
};
