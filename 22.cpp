class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
	for( auto c : s )
		++m[c];

	priority_queue<pair<int, char>> maxHeap;
	for( auto p : m )
		maxHeap.push( { p.second, p.first } );

	string result = "";
	while( !maxHeap.empty() ) {
		auto p = maxHeap.top(); maxHeap.pop();
		while( p.first-- )
			result += p.second;
	}
	return result;
    }
};
