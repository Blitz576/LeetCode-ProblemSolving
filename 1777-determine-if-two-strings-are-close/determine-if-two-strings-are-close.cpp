class Solution {
public:
    bool closeStrings(std::string word1, std::string word2) {
        if (word1.size() != word2.size()) {
            return false;
        }

        // Array to store frequency of characters in word1 and word2
        int freq1[26] = {0};
        int freq2[26] = {0};
        
        // Array to store presence of characters in word1 and word2
        bool hasChar1[26] = {0};
        bool hasChar2[26] = {0};

        // Count frequencies and track presence of characters
        for (char c : word1) {
            freq1[c - 'a']++;
            hasChar1[c - 'a'] = true;
        }
        for (char c : word2) {
            freq2[c - 'a']++;
            hasChar2[c - 'a'] = true;
        }

        // Compare character presence
        for (int i = 0; i < 26; ++i) {
            if (hasChar1[i] != hasChar2[i]) {
                return false;
            }
        }

        // Collect frequencies into vectors and sort them
        std::vector<int> freqList1, freqList2;
        for (int i = 0; i < 26; ++i) {
            if (freq1[i] > 0) freqList1.push_back(freq1[i]);
            if (freq2[i] > 0) freqList2.push_back(freq2[i]);
        }
        
        // Sort frequency lists
        std::sort(freqList1.begin(), freqList1.end());
        std::sort(freqList2.begin(), freqList2.end());

        // Compare sorted frequency lists
        return freqList1 == freqList2;
    }
};