class Solution {
public:
    bool isPalindrome(int x) {
            if (x < 0) {
        cout << x << " is not a palindrome" << endl;
        return false;
        return 0;
    }
        long reversed =0;
        int original = x;
        while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit; 
        x /= 10;
    }

    

    if (original == reversed) {
        cout << original << " is a palindrome" << endl;
        return true;
    } else {
        cout << original << " is not a palindrome" << endl;
        return false;
    }
    return 0;
    }
};

