#include <gtest/gtest.h>

#include "module1_to_test1.h"

TEST(TestSuiteNameModule1ToTest1, TestNameFooToTest) {
    EXPECT_TRUE(foo_to_test());
}