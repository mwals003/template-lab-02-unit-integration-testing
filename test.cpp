#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, Integers) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "1"; test_val[2] = "2"; test_val[3] = "3";
    EXPECT_EQ("1 2 3", echo(4,test_val));
}

TEST(EchoTest, Doubles) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "1.0"; test_val[2] = "2.0"; test_val[3] = "3.0";
    EXPECT_EQ("1.0 2.0 3.0", echo(4,test_val));
}

TEST(EchoTest, Strings) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "one"; test_val[2] = "two"; test_val[3] = "three";
    EXPECT_EQ("one two three", echo(4,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
