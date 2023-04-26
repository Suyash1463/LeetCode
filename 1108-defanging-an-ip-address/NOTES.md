Approach 1: To iterate over the string and append each character to a new string object, replacing periods with "[.]" as you go along. This can be done without creating new string objects at each step.

```
class Solution {
public:
    string defangIPaddr(string address) {
        string defanged = "";
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

```

Approach 2: Use a stringstream: You can use a stringstream to avoid creating a new string every time you encounter a period. Instead, you can simply append "[.]" to the stream whenever you encounter a period. Once you have processed the entire string, you can retrieve the defanged IP address from the stream. This approach can be faster than building a string character-by-character.

```
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

```


Approach 3: Use reserve() to pre-allocate memory: Since you know the size of the defanged IP address string beforehand, you can use the reserve() method to pre-allocate memory for the string. This can prevent the string from having to resize itself as you append characters, which can be time-consuming for large strings.

```
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

```
