class Solution {
public:
    string defangIPaddr(string address) {
        string defanged;
        defanged.reserve(address.size() + 6); // Add 6 to account for "[.]" in place of each period
        for (char c : address) {
            if (c == '.') {
                defanged += "[.]";
            } else {
                defanged += c;
            }
        }
        return defanged;
    }
};
