class DynamicArray {
public:

    DynamicArray(int capacity) {

        cap = capacity;
        len = 0;
        array = new int[capacity];

    }

    int get(int i) {

        return array[i];
    }

    void set(int i, int n) {

        array[i] = n;
    }

    void pushback(int n) {

        if (len == cap) resize();

        array[len] = n;
        len++;
    }

    int popback() {

        int res = array[len - 1];
        len--;

        return res;
    }

    void resize() {

        cap *= 2;

        int* new_array = new int[cap];
        for (int i = 0; i < len; i++) new_array[i] = array[i];

        delete[] array;

        array = new_array;
    }

    int getSize() {

        return len;
    }

    int getCapacity() {

        return cap;
    }

private:

    int cap;
    int* array;
    int len; 
};
