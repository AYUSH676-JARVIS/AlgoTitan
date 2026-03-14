#include <cmath>
#include <iostream>

class Solution {
public:
    bool isPowerOfTwo(int n) {

        for(int i =0; i<= 30; i++) {

            int ans =pow(2,i);

            if (ans == n ){
                return true;

            }
        }
        return false;
    }
};

int main() {
    Solution s;
    int n;
    std::cin >> n;
    std::cout << (s.isPowerOfTwo(n) ? "true" : "false") << '\n';
    return 0;
}
