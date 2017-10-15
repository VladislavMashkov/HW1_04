#include "catch.hpp"
#include <Stack.hpp>

TEST_CASE("Check pop", "[stack]") {
	Stack<int> IntArr;
		IntArr.push(1);
		IntArr.push(2);
		IntArr.push(3);
    		IntArr.push(4);
		int val = IntArr.top();
		IntArr.pop();
		IntArr.pop();

		REQUIRE(IntArr.count() == 2);
		REQUIRE(val == 4);
}
