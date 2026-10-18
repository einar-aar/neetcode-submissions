
class LinkedNode {

private:

public:

    int value;
    LinkedNode* next = nullptr;

    LinkedNode() : value(0), next(nullptr) {};

    LinkedNode(int val) : value(val), next(nullptr) {};

    LinkedNode(int val, LinkedNode* node) : value(val), next(node) {};

};


class LinkedList {

private:

    LinkedNode* head;
    LinkedNode* tail;

    int size;

public:
    LinkedList() : head(nullptr), tail(nullptr), size(0) {};

    int get(int index) {

        if (index < 0 || index >= size) return -1;

        LinkedNode* iterator = head;

        for (int i = 0; i < index; i++) {

            if (iterator->next == nullptr) return -1;

            iterator = iterator->next;
        }

        return iterator->value;
    }

    void insertHead(int val) {
        
        LinkedNode* new_node = new LinkedNode(val, head);
        head = new_node;
        if (tail == nullptr) tail = new_node;

        size++;
    }
    
    void insertTail(int val) {

        LinkedNode* new_node = new LinkedNode(val);

        if (tail != nullptr) tail->next = new_node;

        tail = new_node;

        if (head == nullptr) head = new_node;

        size++;
    }

    bool remove(int index) {
        
        if (index < 0 || index >= size) return false;

        if (index == 0) {

            LinkedNode* remove = head;
            head = head->next;

            if (size == 1) tail = nullptr;

            delete remove;

            size--;

            return true;
        }

        LinkedNode* iterator = head;

        for (int i = 0; i < index - 1; i++) {

            iterator = iterator->next;
        }

        LinkedNode* remove = iterator->next;
        iterator->next = iterator->next->next;

        if (remove == tail) tail = iterator;

        delete remove;

        size--;

        return true;
    }

    vector<int> getValues() {

        vector<int> values;
        values.reserve(size);

        LinkedNode* iterator = head;

        while (iterator != nullptr) {

            values.push_back(iterator->value);
            iterator = iterator->next;
        }

        return values;
    }
};
