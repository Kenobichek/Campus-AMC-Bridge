#include <iostream>
#include <iomanip>

int main() {
    double a, q, n;
    std::cin >> a >> q >> n;
    std::cout << std::fixed << std::setprecision(8);
    std::cout << a * pow(q, n - 1);
    return 0;
}