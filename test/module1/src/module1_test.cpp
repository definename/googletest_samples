#include "module1_to_test1.h"

/******************************************************
 * GTest
******************************************************/
#include <gtest/gtest.h>

class Module1TestFixture: public ::testing::Test {
    protected:
    void SetUp() override {
        mq_.push(1);
    }
    Module1 mq_;
};

TEST(TestSuiteNameModule1ToTest1, TestNameFooToTest1) {
    EXPECT_TRUE(foo_to_test());
}

TEST_F(Module1TestFixture, TestNameModule1Size) {
    EXPECT_EQ(mq_.size(), 1);
}

/******************************************************
 * GMock
******************************************************/
#include <gmock/gmock.h>

class MockTurtle : public Turtle {
    public:
    MOCK_METHOD(void, Up, (), (override));
    MOCK_METHOD(void, Down, (), (override));
};

TEST(MockTest, MockTestUpDown) {
    MockTurtle turtle;
    EXPECT_CALL(turtle, Down()).Times(::testing::AtLeast(1));
    turtle.Down();
}