class TrieNode {
public:
    vector<TrieNode*> children;
    bool isEnd;
    char content;
    // Initialize your data structure here.
    TrieNode() {
        content = ' ';
        isEnd = false;
    };
    TrieNode(char ch) {
        content = ch;
        isEnd = false;
    }
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }

    // Inserts a word into the trie.
    void insert(string word) {
        if(search(word))
            return;
        TrieNode* cur = root;
        for(int i = 0; i < word.size(); i++) {
            TrieNode* pre = cur;
            cur = find_children(cur->children, word[i]);
            if(cur == nullptr) {
                TrieNode* new_child = new TrieNode(word[i]);
                pre->children.push_back(new_child);
                cur = new_child;
            }
        }
        cur->isEnd = true;
    }

    // Returns if the word is in the trie.
    bool search(string word) {
        TrieNode* cur = root;
        for(int i = 0; i < word.size(); i++) {
            cur = find_children(cur->children, word[i]);
            if(cur == nullptr) {
                return false;
            }
        }
        return cur->isEnd == true;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
        TrieNode* cur = root;
        for(int i = 0; i < prefix.size(); i++) {
            cur = find_children(cur->children, prefix[i]);
            if(cur == nullptr) {
                return false;
            }
        }
        return true;
    }

    TrieNode* find_children(vector<TrieNode*> children, char ch) {
        for(int i = 0; i < children.size(); i++) {
            if(children[i]->content == ch)
                return children[i];
        }
        return nullptr;
    }

private:
    TrieNode* root;
};

// Your Trie object will be instantiated and called as such:
// Trie trie;
// trie.insert("somestring");
// trie.search("key");
