#include<stack>
class MyQueue {
public:
        stack<int> main1;
        stack<int> main2;    
    MyQueue() {   
    }
    void scopy(){
        stack<int> temp;
        if(main2.empty()){
            while(!main1.empty()) {
            main2.push(main1.top());
            main1.pop();            
            }
        }else{
            while(!main2.empty()) {
            temp.push(main2.top());
            main2.pop();            
            }  
            while(!main1.empty()) {
            main2.push(main1.top());
            main1.pop(); 
            }
            while(!temp.empty()) {
            main2.push(temp.top());
            temp.pop(); 
            }
        }
    }
    void push(int x) {
        main1.push(x);
    }
    
    int pop() {
        scopy();
        int temp = main2.top();main2.pop();
        return temp;
    }
    
    int peek() {
        scopy();
        return main2.top()   ;     
    }
    
    bool empty() {
        scopy();
        if(main2.empty())return 1;
        return 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */