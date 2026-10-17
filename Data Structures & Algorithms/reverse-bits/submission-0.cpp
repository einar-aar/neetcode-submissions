class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        uint32_t reversed_value = 0;

        for (int i = 0; i < 32; i++) {

            if ((n & 1) == 1) {

                reversed_value |= (1 << (31 - i));
            }

            n = (n >> 1);
        }

         return reversed_value;
    }
};
