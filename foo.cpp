#include "catch.hpp"
unsigned int sum (unsigned int number1,unsigned int number2 )
{
return number1+number2;
}
TEST_CASE ("Sum", "[sum]")
{
REQUIRE( sum(1,2) == 3 );
REQUIRE( sum(10,27) == 37 );
REQUIRE( sum(17,16) == 33 );
}
