#include <iostream>
#include <string>
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)<s.size()){
            int x=s.find(part);
            s.erase(x,part.size());
        }
        return s;
    }
};