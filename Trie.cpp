class TrieNode {
public:
	char ch;
	bool isWord;
	TrieNode* children[26] {nullptr};
	
	TrieNode() {
		
	}
	
	TrieNode(char ch, bool isWord=false) {
		this->ch = ch;
		this->isWord = isWord;
	}
	
	~TrieNode() {
		// release all children required
	}
	
};



class Trie {
public:
	TrieNode* root = new TrieNode();
	
    Trie() {
        
    }
    
    void insert(string word) {
		TrieNode* cur = root;
        for (char c : word) {
			int idx = c - 'a';
			if (cur->children[idx] == nullptr) {
				cur->children[idx] = new TrieNode(c);
			}
			cur = cur->children[idx];
		}
		cur->isWord = true;
    }
    
    bool search(string word) {
        TrieNode* cur = root;
        for (char c : word) {
			int idx = c - 'a';
			if (cur->children[idx] == nullptr) {
				return false;
			}
			cur = cur->children[idx];
		}
		return cur->isWord;
    }
    
    bool startsWith(string prefix) {
        TrieNode* cur = root;
        for (char c : prefix) {
			int idx = c - 'a';
			if (cur->children[idx] == nullptr) {
				return false;
			}
			cur = cur->children[idx];
		}
		return true;
    }
};
