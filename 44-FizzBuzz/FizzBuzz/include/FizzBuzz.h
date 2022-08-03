#pragma once
#include <string>

class FizzBuzz
{
public:
    FizzBuzz() = default;
    static auto fizzBuzz(int number) -> std::string;
};