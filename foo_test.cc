#include <gtest/gtest.h>

struct foo_test : testing::Test {
  foo_test() : v_(1) {}

 protected:
  int v_;
};

TEST_F(foo_test, v_is_one) { EXPECT_EQ(1, v_); }

TEST_F(foo_test, v_is_not_two_or_three) {
  EXPECT_NE(2, v_);
  EXPECT_NE(3, v_);
}
