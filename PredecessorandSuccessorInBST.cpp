class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        pre = NULL;
        suc = NULL;
        Node* cur = root;
        while(cur!=NULL){
            if(key>=cur->key){
                cur = cur->right;
            }
            else{
                suc = cur;
                cur = cur ->left;
            }
        }
        cur = root;
        while(cur!=NULL){
            if(key>cur->key){
                pre = cur;
                cur = cur->right;
            }
            else{
                cur = cur->left;
            }
        }
        
    }
};
