
/*class Solution {
public:
    bool threeFibonacciSum(int n) {
        int a = 0;
        int b = 1;

        while (true) {
            int c = a + b;
            int sum = a + b + c;

            if (sum == n) {
                return true;
            }

            if (sum > n) {
                return false;
            }

            a = b;
            b = c;
        }

        return false;
    }
};*/
class Solution {
public:
    bool isPerfectSquare(long long x) {
        long long r = sqrt(x);
        return r * r == x;
    }

    bool threeFibonacciSum(int n) {
        if (n % 2 != 0) return false;

        long long x = n / 2;

        return isPerfectSquare(5 * x * x + 4) ||
               isPerfectSquare(5 * x * x - 4);
    }
};
