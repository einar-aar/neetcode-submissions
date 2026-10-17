class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()) return false;

        int alphabet_freq_s[26] = {0};
        int alphabet_freq_t[26] = {0};

        for (int i = 0; i < s.size(); i++) {

            alphabet_freq_s[s[i] - 'a']++;
            alphabet_freq_t[t[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {

            if (alphabet_freq_s[i] != alphabet_freq_t[i]) return false;
        }

        return true;
    }
};
