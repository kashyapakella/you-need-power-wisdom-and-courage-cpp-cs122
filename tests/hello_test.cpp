#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE("Adding and subtracting")
{
    TriangleNumberCalc t;

    REQUIRE(t.add(5, 10) == 70);
    REQUIRE(t.subtract(5, 10) == -40);
}
