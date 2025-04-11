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
			int divider = 2;
			if (num == 4) {
				while (num % divider == 0) {
					result.emplace_back(divider);
					num /= divider;
				}
			}
			else if (num == 6) {
				for (divider = 2; num > 1; ++divider) {
					while (num % divider == 0) {
						result.emplace_back(divider);
						num /= divider;
					}
				}
			}
			else
				result.emplace_back(num);
		}
		return result;
	}
private:
};