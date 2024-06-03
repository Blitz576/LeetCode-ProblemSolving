class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     if (strs.empty()) return "";
        
        // Start with the first string as the initial prefix
        std::string prefix = strs[0];
        
        // Iterate over the rest of the strings in the array
        for (size_t i = 1; i < strs.size(); ++i) {
            const std::string& currentString = strs[i];
            size_t j = 0;
            
            // Compare characters of the current string and the prefix
            while (j < prefix.size() && j < currentString.size() && prefix[j] == currentString[j]) {
                ++j;
            }
            
            // Update the prefix to the common part found so far
            prefix = prefix.substr(0, j);
            
            // If the common prefix becomes empty, no need to check further
            if (prefix.empty()) return "";
        }
        
        return prefix;      
    }
};