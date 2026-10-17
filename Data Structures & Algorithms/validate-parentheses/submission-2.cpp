class Solution {
public:
    bool isValid(string s) {
        
        vector<char> character_stack;
        character_stack.reserve(s.size() / 2);

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                
                character_stack.push_back(s[i]);

            } else if (!character_stack.empty()) {

                if (s[i] == ')') {

                    if (character_stack[character_stack.size() - 1] != '(') return false;
                }

                if (s[i] == ']') {

                    if (character_stack[character_stack.size() - 1] != '[') return false;
                }

                if (s[i] == '}') {

                    if (character_stack[character_stack.size() - 1] != '{') return false;
                }

                character_stack.pop_back();
            
            } else {

                return false;
            }
        }

        return character_stack.empty();
    }
};
