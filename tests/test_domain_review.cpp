#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{40, 33, 25, 67};
    assert(domain_review_score(item) == 105);
    assert(domain_review_lane(item) == "watch");
}
