#include<bits/stdc++.h>
using namespace std;
class TrieNode
{
    vector<TrieNode *> children;
    bool isTerminal;
public:
    TrieNode()
    {
        isTerminal=false;
        children.resize(26,NULL);
    }
    friend class Trie;
};
class Trie
{
    TrieNode* root;
public:
    Trie()
    {
        root= new TrieNode;
    }
    static void insertWord(const string & word)
    {
        TrieNode *parent=root;
        for (int i=0;word[i]!='\0';i++)
        {
            if (!parent->children[word[i]-'a'])
            {
                TrieNode *temp=new TrieNode;
                parent->children[word[i]-'a']=temp;
            }
            parent=parent->children[word[i]-'a'];
            if (word[i+1]=='\0')
            {
                parent->isTerminal=true;
            }
        }
    }
    void removeWord
};
