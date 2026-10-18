class MyCircularQueue {

private:

    int size;
    vector<int> que;

public:
    MyCircularQueue(int k) : size(k) {
        
        que.reserve(k);
    }
    
    bool enQueue(int value) {

        if (size == que.size()) return false;

        que.push_back(value);
        return true;
    }
    
    bool deQueue() {
        
        if (que.empty()) return false;

        que.erase(que.begin());
        return true;
    }
    
    int Front() {
        
        return que.empty() ? -1 : que.front();
    }
    
    int Rear() {
        
        return que.empty() ? -1 : que.back();
    }
    
    bool isEmpty() {

        return que.empty();
    }
    
    bool isFull() {
        
        return (que.size() == size);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */