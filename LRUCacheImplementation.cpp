#include <unordered_map>

class Node {
public:
    int key;
    int val;
    Node* prev;
    Node* next;
    Node(int key, int val) : key(key), val(val), prev(nullptr), next(nullptr) {}
};

class LRUCache {
public:
    LRUCache(int capacity) {
        ssize = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    void addnode(Node* newnode) {
        newnode->prev = head;
        newnode->next = head->next;
        head->next->prev = newnode;
        head->next = newnode;
    }

    void deletenode(Node* delnode) {
        Node* prevnode = delnode->prev;
        Node* nextnode = delnode->next;
        prevnode->next = nextnode;
        nextnode->prev = prevnode;
        delete delnode; 
    }

    int get(int _key) {
        if (m.find(_key) != m.end()) {
            Node* resnode = m[_key];
            int res = resnode->val;
            m.erase(_key);
            deletenode(resnode);
            addnode(new Node(_key, res)); 
            m[_key] = head->next;
            return res;
        }
        return -1;
    }

    void put(int _key, int value) {
        if (m.find(_key) != m.end()) {
            Node* resnode = m[_key];
            m.erase(_key);
            deletenode(resnode);
        }
        if (m.size() == ssize) {
            m.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new Node(_key, value));
        m[_key] = head->next;
    }

private:
    int ssize;
    Node* head;
    Node* tail;
    std::unordered_map<int, Node*> m;
};
