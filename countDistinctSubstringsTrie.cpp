struct Node{
    Node* links[26];
    bool containKey(char ch){
        return links[ch-'a']!=NULL;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
};


int countDistinctSubstrings(string &word)
{   
    //no trie class is required as we do not need search/starts with/or need to mark flag=1
    // create a new trie
    Node* root=new Node();
    int ans=0;
    // for every prefix , either add it(new hence ans+1) or if already present then just move onto the next node
        for(int i=0;i<word.size();i++)
        {
            Node* node=root;
            
            for(int j=i;j<word.size();j++)
            {
                if(!node->containKey(word[j])){
                    ans++;
                    node->put(word[j],new Node());
                }
                node=node->get(word[j]);
            }
        }
        return ans+1;
}
