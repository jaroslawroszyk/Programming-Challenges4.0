#include <gtest/gtest.h>
#include "../include/FizzBuzz.h"

class FizzBuzzTest : public ::testing::Test
{
protected:
    FizzBuzzTest() = default;

    ~FizzBuzzTest() override
    {};
};

TEST_F(FizzBuzzTest, GetFizzBuzzIfFifty)
{
    int number = 15;
    EXPECT_EQ(FizzBuzz::fizzBuzz(number),"FizzBuzz");
}

TEST_F(FizzBuzzTest,GetFizzIfThree)
{
    int number = 3;
    EXPECT_EQ(FizzBuzz::fizzBuzz(number),"Fizz");
}

TEST_F(FizzBuzzTest,GetBuzzIfFive)
{
    int number = 5;
    EXPECT_EQ(FizzBuzz::fizzBuzz(number),"Buzz");
}