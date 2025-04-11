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
TEST_F(PrimeFixture, Of3) {
	expected = { 3 };
	EXPECT_EQ(expected, pf.of(3));
}
TEST_F(PrimeFixture, Of4) {
	expected = { 2, 2 };
	EXPECT_EQ(expected, pf.of(4));
}
TEST_F(PrimeFixture, Of6) {
	expected = { 2, 3 };
	EXPECT_EQ(expected, pf.of(6));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}