#include <bits/stdc++.h> 
struct Node{
    Node* links[26];
    bool flag = false;
    bool containKey(char ch){
        return (links[ch-'a']!=NULL);
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void setEnd(){
        flag = true;
    }
    bool getEnd(){
        return flag;
    }
    void put(char ch,Node* node){
        links[ch-'a'] = node;
    }
};


class Trie {
private:
    Node* root;
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* node = root;
        for(int i=0;i<word.size();i++){
            if(!node->containKey(word[i])){
                node->put(word[i], new Node());
            }
                node = node->get(word[i]);
        }
        node->setEnd();
    }
    
    bool search(string word) {
        Node* node = root;
        for(int i=0;i<word.size();i++){
            if(!node->containKey(word[i])){
                return false;
            }
            node = node->get(word[i]);
        }
        return node->getEnd();
    }
    
    bool startsWith(string prefix) {
        Node* node = root;
        for(int i=0;i<prefix.size();i++){
            if(!node->containKey(prefix[i])){
                return false;
            }
            node = node->get(prefix[i]);
        }
        return true;
    }
    bool checkIfPrefixExists(string word){
        Node* node = root;
        for(int i=0;i<word.length();i++){
            if(node->containKey(word[i])){
                node=node->get(word[i]);
                if(!node->getEnd()) return false;
            }
            else return false;
        }
        return true;
    }
};
string completeString(int n, vector<string> &a){
    // Write your code here.
    Trie trie;
    // all words in the array inserted in the trie
    for(auto &it:a){
        trie.insert(it);
    }
    // longest string
    string longest = "";
    // check for the longest substring
    for(auto &it:a){
        if(trie.checkIfPrefixExists(it)){
            if(it.length()>longest.length()) longest = it;
            else if (it<longest) longest = it;
        }
    }
    if(longest =="") return "None";
    return longest ;
}
