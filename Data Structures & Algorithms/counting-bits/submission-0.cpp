class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> number_of_1s(n + 1, 0);

        for (int i = 0; i < n + 1; i++) {

            int current = i;

            while (current != 0) {

                if ((current & 1) == 1) number_of_1s[i]++;
                
                current = (current >> 1);
            }
        }

        return number_of_1s;
    }
};
