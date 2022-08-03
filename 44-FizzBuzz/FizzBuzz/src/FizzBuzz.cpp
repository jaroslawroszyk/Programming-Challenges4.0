#include "FizzBuzz.h"
#include <string>

auto FizzBuzz::fizzBuzz(int number) -> std::string
{
    if(number%3 == 0 and number %5==0)
        return "FizzBuzz";
    else if(number%3==0)
        return "Fizz";
    else if(number%5==0)
        return "Buzz";
    return std::to_string(number);
}