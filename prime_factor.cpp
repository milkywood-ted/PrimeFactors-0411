#include <vector>

/*
2-->[2]
3-->[3
4-->[2,2]
6-->[2,3]
8-->[2,2,2]
9-->[3,3]
12-->[2,2,3]
14-->[2,7]
*/

using std::vector;

class PrimeFactor {
public:
	vector<int> of(int num) {
		vector<int> result = {};
		if (num == 2)
			result.emplace_back(2);
		if (num == 3)
			result.emplace_back(3);
		return result;
	}
private:
};