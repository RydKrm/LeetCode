class Solution {
public:
    int romanToInt(string s) {
        int len = s.length();
        int res = 0;
        
        int i = 0;
        while (i < len) {
            switch (s[i++]) {
                case 'I':
                    res += (i < len) && (s[i] == 'V' || s[i] == 'X') ? -1 : 1;
                    break;
                    
                case 'V':
                    res += 5;
                    break;
                
                case 'X':
                    res += (i < len) && (s[i] == 'L' || s[i] == 'C') ? -10 : 10;
                    break;
                    
                case 'L':
                    res += 50;
                    break;
                    
                case 'C':
                    res += (i < len) && (s[i] == 'D' || s[i] == 'M') ? -100 : 100;
                    break;
                    
                case 'D':
                    res += 500;
                    break;
                    
                case 'M':
                    res += 1000;
                    break;
            }
        }
        
        return res;
    }
};