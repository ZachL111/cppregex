#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{63, 80, 17, 16, 7};
    assert(score_signal(signal_case_1) == 72);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{89, 103, 18, 16, 8};
    assert(score_signal(signal_case_2) == 145);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{66, 82, 19, 18, 4};
    assert(score_signal(signal_case_3) == 56);
    assert(classify_signal(signal_case_3) == "review");
}
