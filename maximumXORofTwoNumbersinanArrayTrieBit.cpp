struct Node{
    Node* links[2];
    bool containsKey(int ind){
        return (links[ind]!=NULL);
    }
    Node* get(int ind){
        return links[ind];
    }
    void put(int ind,Node* node){
        links[ind] = node;
    }
};
class Trie{
    private:
    Node* root;
    public:
    Trie(){
        root = new Node();
    }
    public:
    void insert(int num){
        Node* node = root;
        for(int i=31;i>=0;i--){
            int bit = (num >> i) & 1;
            if(!node->containsKey(bit)){
                node->put(bit,new Node());
            }
            node = node->get(bit);
        }
    }
    int findMax(int num){
        Node* node = root;
        int maxNum = 0;
        for(int i=31;i>=0;i--){
            int bit = (num >> i) & 1;
            if(node->containsKey(!bit)){
                maxNum = maxNum | (1<<i);
                node=node->get(!bit);
            }
            else{
                node=node->get(bit);
            }
        }
        return maxNum;
    }
};
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie trie;
        int n = nums.size();
        for(int i=0;i<n;i++){
            trie.insert(nums[i]);
        }
        int maxi = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                maxi = max(maxi,trie.findMax(nums[j]));
            }
        }
        return maxi;
    }
};
