#include <iostream>
#include <unordered_map>
using namespace std;


#define hashmap unordered_map<char, node*>

class node
{
    public:
        char data;
        hashmap h;
        bool isTerminal;

        node(char d)
        {
            data = d;
            isTerminal = false;
        }

};


class Trie
{
    node* root; 

    public: 
    Trie(){
        root = new node('\0');  
    }    
    void addWord(char *word)
    {
        node*temp = root;
        for(int i=0;word[i]!='\0';i++)
        {
            char ch = word[i];

            if(temp->h.count(ch)==0) // if the letter does not exist
            {
                node* child = new node(ch);
                temp->h[ch] = child;
                temp = child;

            }

            else temp = temp->h[ch];
        }

        temp->isTerminal = true;
    }

    bool search(char *word)
    {
        node* temp = root;

        for(int i=0;word[i]!='\0';i++)
        {
            char ch = word[i];

            if(temp->h.count(ch))
            {
                temp = temp->h[ch];
            }
            else return false;
        }

        return temp->isTerminal;
    }

};


int main()
{
    char word[10][100] = {"apple","ape","code","no"};

    Trie t;
    for(int i=0;i<4;i++)
    {
        t.addWord(word[i]);
    }

    char searchWord[100];
    cin.getline(searchWord,100);


    if(t.search(searchWord))
    {
        cout<<searchWord<<" found "<<endl;

    }   

    else cout<<" not found "<<endl; 

    return 0;
}