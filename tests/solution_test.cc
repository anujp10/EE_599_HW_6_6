#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(RearrangedShould, RearrangeReturn) {
  Solution solution;
  std::vector <int> input = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
  std::vector <int> actual = solution.Rearrangevector(input, 9);
  std::vector <int> expected = {5, 2, 3, 6, 9, 7, 11, 12, 14, 10};
  EXPECT_EQ(expected, actual);
}

TEST(RearrangedShould_1, RearrangeReturn_1) {
  Solution solution;
  std::vector <int> input = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
  std::vector <int> actual = solution.Rearrangevector(input, 100);
  std::vector <int> expected = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
  EXPECT_EQ(expected, actual);
}

TEST(RearrangedShould_2, RearrangeReturn_2) {
  Solution solution;
  std::vector <int> input = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
  std::vector <int> actual = solution.Rearrangevector(input, -1);
  std::vector <int> expected = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
  EXPECT_EQ(expected, actual);
}

TEST(RearrangedShould_3, RearrangeReturn_3) {
  Solution solution;
  std::vector <int> input = {};
  std::vector <int> actual = solution.Rearrangevector(input, 2);
  std::vector <int> expected = {};
  EXPECT_EQ(expected, actual);
}