// time - O()   
// space - O()              

#include<bits/stdc++.h>
using namespace std;

    
class LRUCache {
public:
    
    int size, curr_size;
    queue<int> keys;
    unordered_map<int, int> in_q, m;
    
    LRUCache(int capacity) {
        size = capacity, curr_size = 0;
        while(keys.size())
            keys.pop();
        in_q.clear(), m.clear();
    }
    
    int get(int key) {
        if(in_q[key] > 0)
        {
            in_q[key]++;
            keys.push(key);
            return m[key];
        }
            
        return -1;
    }
    
    void put(int key, int value) {
        if(size <= curr_size && in_q[key] == 0)
        {
            while(in_q[keys.front()] > 1)
            {
                in_q[keys.front()]--;
                keys.pop();
            }
            in_q[keys.front()]--;
            keys.pop();
            curr_size--;
        }
        if(in_q[key] == 0)
            curr_size++;
        in_q[key]++;
        keys.push(key);
        m[key] = value;
        return;
    }
};



int main(){
  
  return 0;
}