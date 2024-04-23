// Copyright 2020 UNN-IASR
#include <gtest/gtest.h>
#include "fun.h"

TEST(MyFunTest, test1) {
  int x = 2;
  int n = 8;
  int result = power(x, n);
  EXPECT_EQ(256, result);
}
