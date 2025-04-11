#include "gmock/gmock.h"
#include "prime_factor.cpp"

#include <vector>

using std::vector;

class PrimeFixture : public ::testing::Test {
public:
	PrimeFactor pf;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, pf.of(1));
}
TEST_F(PrimeFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, pf.of(2));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}