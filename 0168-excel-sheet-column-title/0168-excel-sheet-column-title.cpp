class Solution {
public:
    string convertToTitle(int columnNumber) {
        string resism = "";

        while (columnNumber > 0) {
            columnNumber--;
            resism = char((columnNumber % 26) + 'A') + resism;
            columnNumber /= 26;
        }
        
        return resism;        
    }
};