#include "catch.hpp"
#include "Calc.hpp"

namespace ModernCppCI {

    namespace Test {
        TEST_CASE("calc should be created", "[calc]") {
            Calc *calc = new Calc();

            REQUIRE(calc != nullptr);

            delete calc;
        }

        TEST_CASE("calc should be created2", "[calc]") {
            Calc *calc = new Calc();

            REQUIRE(calc != nullptr);

            delete calc;
        }
    }

}


