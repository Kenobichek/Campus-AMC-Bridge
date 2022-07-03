#include <iostream>
#include <vector>
#include <set>

int main() {

    // Member of the sequence A
    int a;

    // Vector of the sequence A
    std::vector<int> vectorSequence_A;

    while (std::cin >> a) {
        if (a == -1) {
            break;
        }
        vectorSequence_A.push_back(a);
    }

    // Member of the sequence B
    int b;

    // Set of the sequence B
    std::set<int> setSequence_B;

    while (std::cin >> b) {
        if (b == -1) {
            break;
        }
        setSequence_B.insert(b);
    }

    for (int i = 0; i < vectorSequence_A.size(); i++) {
        if (setSequence_B.find(vectorSequence_A[i]) != setSequence_B.end()) {
            std::cout << 1 << " ";
        }
        else {
            std::cout << 0 << " ";
        }
    }

    std::cout << -1;

    return 0;
}