class Solution {
public:
    bool squareIsWhite(string coordinates) {
        //black - col+row - even
        //white - col+row - white
        int sum = coordinates[0]+coordinates[1];
        if (sum%2==0)
            return false;

        return true;
    }
};