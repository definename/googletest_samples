#include <gtest/gtest.h>

#include "module1_to_test1.h"

class Module1Test: public ::testing::Test {
    protected:
    void SetUp() override {
        mq_.push(1);
    }
    Module1 mq_;
};

TEST(TestSuiteNameModule1ToTest1, TestNameFooToTest1) {
    EXPECT_TRUE(foo_to_test());
}

TEST_F(Module1Test, TestNameModule1Size) {
    EXPECT_EQ(mq_.size(), 1);
}
