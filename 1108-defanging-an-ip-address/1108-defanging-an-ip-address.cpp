class Solution {
public:
    string defangIPaddr(string address) {
        stringstream ss;
        for (char c : address) {
            if (c == '.') {
                ss << "[.]";
            } else {
                ss << c;
            }
        }
        return ss.str();
    }
};
