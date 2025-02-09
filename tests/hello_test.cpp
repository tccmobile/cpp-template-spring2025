#include <gtest/gtest.h>
#include "hello.h"

TEST(HelloTest, ReturnsHelloWorld) {
    Hello hello;
    EXPECT_EQ(hello.getGreeting(), "Hello, World!");
} 