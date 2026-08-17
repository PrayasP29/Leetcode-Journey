class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban;
        for(string s:banned){
            ban.insert(s);
        }
        
        for(char &c:paragraph){
            if(isalpha(c))
            c=tolower(c);
            else{
                c=' ';
            }
        }
        stringstream ss(paragraph);
        string word;
        unordered_map<string,int> freq;

        while(ss>>word){
            if(ban.find(word)==ban.end()){
            freq[word]++;
            }
        }
        int maxcount=0;
        string answer ="";

        for(auto word : freq){
            if(word.second>maxcount){
                maxcount=word.second;
                answer=word.first;
            }
        }
        return answer;
    }
};