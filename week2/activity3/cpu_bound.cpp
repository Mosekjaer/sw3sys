#include <iostream>
#include <cmath>

int main() {
    unsigned long long cnt = 0;

    for (unsigned long long k = 1; k <= 1000000000ULL; ++k) {
        unsigned long long l = std::sqrt(k);
        if (l % 2 == 0) {
            ++cnt;
        }
    }

    std::cout << cnt << std::endl;
    return 0;
}
