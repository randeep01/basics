#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

template <typename K, typename V>
class LRUCache {
private:
  int capacity;
  list<pair<K, V>> cacheList;  // Doubly linked list for efficient reordering
  unordered_map<K, typename list<pair<K, V>>::iterator> cacheMap; 

public:
  LRUCache(int capacity) : capacity(capacity) {}

  V get(K key) {
    auto it = cacheMap.find(key);
    if (it == cacheMap.end()) {
      return V{}; // Or throw an exception, depending on your needs
    }

    // Move the accessed item to the front of the list
    cacheList.splice(cacheList.begin(), cacheList, it->second);
    return it->second->second;
  }

  void put(K key, V value) {
    auto it = cacheMap.find(key);
    if (it != cacheMap.end()) {
      // Update the value and move to the front
      it->second->second = value;
      cacheList.splice(cacheList.begin(), cacheList, it->second);
      return;
    }

    // If the cache is full, remove the least recently used item
    if (cacheList.size() >= capacity) {
      K keyToRemove = cacheList.back().first;
      cacheList.pop_back();
      cacheMap.erase(keyToRemove);
    }

    // Add the new item to the front
    cacheList.push_front({key, value});
    cacheMap.insert({key, cacheList.begin()});
  }
};

int main() {
  LRUCache<int, int> cache(2);

  cache.put(1, 1);
  cache.put(2, 2);
  cout << cache.get(1) << endl; // returns 1
  cache.put(3, 3);             // evicts key 2
  cout << cache.get(2) << endl; // returns -1 (not found)
  cache.put(4, 4);             // evicts key 1
  cout << cache.get(1) << endl; // returns -1 (not found)
  cout << cache.get(3) << endl; // returns 3
  cout << cache.get(4) << endl; // returns 4

  return 0;
}