#include <vector>
#include <string>
#include <iostream>


using namespace std;


void combinationsUtil(vector<string>&, vector<string>&, int, int);


vector<vector<string>> ret;


void combinations(vector<string> words, int k) {
	vector<string> tmp;
	combinationsUtil(words, tmp, 0, k);
}


void combinationsUtil(vector<string>& words, vector<string>& tmp, int i, int k) {
	if (tmp.size() == k) {
		ret.push_back(tmp);
		return;
	}
	for (int j=i; j<words.size(); j++) {
		tmp.push_back(words[j]);
		combinationsUtil(words, tmp, j+1, k);
		tmp.pop_back();
	}
}


void main() {
  vector<string> words {"a", "b", "c", "d", "e"};
	combinations(words, 3);
	for (auto ws : ret) {
		for (auto w : ws) {
			cout << w << " ";
		} 
		cout << endl;
	}
}



