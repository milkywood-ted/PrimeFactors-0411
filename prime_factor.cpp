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
		if (num > 1) {
			if (num == 4) {
				while (num % 2 == 0) {
					result.emplace_back(2);
					num /= 2;
				}
			}
			else if (num == 6) {
				result.emplace_back(2);
				result.emplace_back(3);
			}
			else
				result.emplace_back(num);
		}
		return result;
	}
private:
};