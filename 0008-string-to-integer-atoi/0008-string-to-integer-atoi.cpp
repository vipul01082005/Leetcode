class Solution {
public:
long long stoint(string s) {
    int n = s.size();
    long long num = 0;
    long long j = 1;
    bool positive = true;
    int start = 0;

    if (!s.empty() && (s[0] == '-' || s[0] == '+')) {
        positive = (s[0] == '+');
        start = 1;
    }

    for (int i = n - 1; i >= start; i--) {
        char ch = s[i];
        if (ch == '-' || ch == '+') {
            return 0; // sign only valid at index 0
        }

        int digit = ch - '0';
        if (digit != 0) {
            if (j > LLONG_MAX / digit) {
                return positive ? INT_MAX : INT_MIN;
            }
            long long term = digit * j;
            if (num > LLONG_MAX - term) {
                return positive ? INT_MAX : INT_MIN;
            }
            num += term;
        }
        if (i > start && j <= LLONG_MAX / 10) {
            j *= 10;
        }
    }

    long long signedNUM = positive ? num : -num;
    if (signedNUM > INT_MAX) {
        return INT_MAX;
    } else if (signedNUM < INT_MIN) {
        return INT_MIN;
    }
    return signedNUM;
}

        int myAtoi(string s) {
        string num = "";
        bool started = false;

        for (char ch : s) {
            if (ch >= '0' && ch <= '9') {
                num += ch;
                started = true;
            } else if (!started && (ch == '-' || ch == '+')) {
                num += ch;
                started = true; // sign can only be the first non-space character
            } else if (ch == ' ' && !started) {
                continue;       // ignore leading spaces
            } else {
                break;          // stop on letters, '.', spaces after start, or extra '+' / '-'
            }
        }

        if (num.empty() || num == "+" || num == "-") {
            return 0;
        }
        return stoint(num);
    }
};