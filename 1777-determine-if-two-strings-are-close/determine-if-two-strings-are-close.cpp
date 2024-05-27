class Solution {
public:
    bool closeStrings(std::string word1, std::string word2) {
        if (word1.size() != word2.size()) {
            return false;
        }

        std::unordered_set<char> set1(word1.begin(), word1.end());
        std::unordered_set<char> set2(word2.begin(), word2.end());
        if (set1 != set2) {
            return false;
        }

        std::unordered_map<char, int> freq1;
        std::unordered_map<char, int> freq2;
        for (char c : word1) {
            freq1[c]++;
        }
        for (char c : word2) {
            freq2[c]++;
        }

        std::vector<int> freqCounts1;
        std::vector<int> freqCounts2;
        for (const auto& pair : freq1) {
            freqCounts1.push_back(pair.second);
        }
        for (const auto& pair : freq2) {
            freqCounts2.push_back(pair.second);
        }
        std::sort(freqCounts1.begin(), freqCounts1.end());
        std::sort(freqCounts2.begin(), freqCounts2.end());

        return freqCounts1 == freqCounts2;
    }
};