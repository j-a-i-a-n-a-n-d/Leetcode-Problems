class Trie 
{
    private :
    vector<Trie*>child;
    bool isWord;
    public:
    Trie()
    {
        isWord=false;
        for(int i =0;i<26;i++)child.push_back(NULL);
    }
    void insert(string word) 
    {
        int n = word.size();
        Trie *node = this;
        for(int i=0;i<n;i++)
        {
            int index = word[i]-'a';
            if (node->child[index]==NULL)
            {
                node->child[index]=new Trie();
            }
            node=node->child[index];
        }
        node->isWord=true;
    }
    bool search(string word)
    {
        Trie *node = this;
        int n = word.size();
        for(int i=0;i<n;i++)
        {
            int index=word[i]-'a';
            if(node->child[index]==NULL)return false;
            node=node->child[index];
        }
        return node->isWord;
    }
    //searching prefix
    bool startsWith(string word) 
    {
        Trie *node=this;
        for(int i =0;i<word.size();i++)
        {
            int index = word[i]-'a';
            if(node->child[index]==NULL)return false;
            node=node->child[index];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */