#include<unordered_map>

class LRUCache {

private:

    int cap;
    unordered_map<int, pair<int, list<int>::iterator>> cache;
    list<int> order;

public:
    LRUCache(int capacity) : cap(capacity) {
        
    }
    
    int get(int key) {
        
        if (cache.find(key) == cache.end()) return -1;

        order.erase(cache[key].second);
        order.push_back(key);
        cache[key].second = --order.end();

        return cache[key].first;
    }
    
    void put(int key, int value) {

        if (cache.find(key) != cache.end()) {

            order.erase(cache[key].second);
            order.push_back(key);

            cache[key].first = value;
            cache[key].second = --order.end();
        }

        else if (cache.size() != cap) {

            order.push_back(key);

            cache.insert({key, {value, --order.end()}});
        }

        else {

            cache.erase(order.front());

            order.pop_front();
            order.push_back(key);

            cache.insert({key, {value, --order.end()}});
        }
    }
};
