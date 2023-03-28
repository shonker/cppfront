
#line 1 "mixed-test-parens.cpp2"
#include <vector>

template<auto>
auto f(auto, auto) -> void { }

constexpr int a = 1;

#include "cpp2util.h"

#line 8 "mixed-test-parens.cpp2"
[[nodiscard]] auto main() -> int;

//=== Cpp2 definitions ==========================================================


#line 8 "mixed-test-parens.cpp2"
[[nodiscard]] auto main() -> int{
    std::vector<int> v {1, 2, 3}; 
    std::cout << (1 + 2) * (3 + cpp2::assert_in_bounds(std::move(v), 0));
    f<(cpp2::cmp_greater(1,2))>(3, 4);
    f<a + a>(5, 6);
}

