// Stack class.
class Stack {
    
public:
    int size;
    int topp;
    int *arr;
    Stack(int capacity) {
        // Write your code here.
        this->size = capacity;
        arr = new int[size];
        topp = -1;
    }

    void push(int num) {
        // Write your code here.
        if(!isFull()){
            arr[++topp] = num;
        }
    }

    int pop() {
        // Write your code here.
        if(!isEmpty()){
            topp--;
            return arr[topp+1];
        }
        else return -1;
    }
    
    int top() {
        // Write your code here.
        if(!isEmpty()) return arr[topp];
        else return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        if(topp==-1) return 1;
        else return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(topp+1==size) return 1;
        else return 0;
    }
    
};
