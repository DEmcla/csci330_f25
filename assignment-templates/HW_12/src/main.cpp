#include <iostream>
#include <vector>
#include <list>
#include <functional>
#include <string>

template<typename K, typename V>
class HashTable {
private:
    static const int DEFAULT_SIZE = 10;
    std::vector<std::list<std::pair<K, V>>> table;
    int table_size;
    int num_elements;
    
    // TODO: Implement hash function
    int hash(const K& key) const;
    
    // TODO: Implement rehashing when load factor exceeds threshold
    void rehash();
    
public:
    // TODO: Implement constructor
    HashTable(int size = DEFAULT_SIZE);
    
    // TODO: Implement insert function
    void insert(const K& key, const V& value);
    
    // TODO: Implement search function
    bool search(const K& key, V& value);
    
    // TODO: Implement remove function
    bool remove(const K& key);
    
    // TODO: Implement display function
    void display();
    
    // TODO: Implement load factor calculation
    double getLoadFactor();
    
    // TODO: Implement size function
    int size() const;
};

int main() {
    // TODO: Create a hash table for integer keys and string values
    
    // TODO: Insert student records (ID -> Name)
    // Example: (12345, "John Doe"), (67890, "Jane Smith"), etc.
    
    // TODO: Search for specific student IDs
    
    // TODO: Display the hash table structure
    
    // TODO: Display current load factor
    
    // TODO: Remove some records and display again
    
    // TODO: Test hash table with string keys (Name -> Grade)
    
    // BONUS TODO: Implement collision resolution comparison (chaining vs open addressing)
    
    return 0;
}