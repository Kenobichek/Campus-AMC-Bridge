#include <iostream>

int main() {

    // Quantity of the members in the sequence.
    int n;
    std::cin >> n;
    
    // Member of the sequence
    int a;

    // Previous member of the sequence
    int previousMember = INT_MIN;

    // The quantity of members of the longest increasing subsequence that consists of neighboring elements.
    int maxLength = 0;

    // Number of members of the current ascending subsequence
    int length = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> a;
        if (a > previousMember) {
            length++;
        }
        else {
            if (length > maxLength) {
                maxLength = length;
            }
            length = 1;
        }
        previousMember = a;
    }

    if (length > maxLength) {
        maxLength = length;
    }

    std::cout << maxLength;
}