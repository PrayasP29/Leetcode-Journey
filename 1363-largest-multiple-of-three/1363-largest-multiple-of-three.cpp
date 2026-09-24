class Solution {
public:
    string largestMultipleOfThree(vector<int>& digits) {
        int sum=0;
        for(int i=0;i<digits.size();i++){
            sum+=digits[i];
        }
        int rem=sum%3;
        sort(digits.begin(),digits.end());
        if(rem==0){
            sort(digits.begin(),digits.end(),greater<int>());
        }

        else if(rem==1){
            bool remove=false;

            for(int i=0;i<digits.size();i++){
                if(digits[i]%3==1){
                    digits.erase(digits.begin()+i);
                    remove=true;
                    break;
                }
            }
            if(!remove){
                int count=0;
                for(int i=0;i<digits.size();i++){
                    if(digits[i]%3==2){
                        digits.erase(digits.begin()+i);
                        count++;
                        i--;
                    }
                    if(count==2){
                        break;
                    }
                }
            }
        }
        else{
            bool remove=false;
            for(int i=0;i<digits.size();i++){
                if(digits[i]%3==2){
                    digits.erase(digits.begin()+i);
                    remove=true;
                    break;
                }
            }

            if(!remove){
                int count=0;
                for(int i=0;i<digits.size();i++){
                    if(digits[i]%3==1){
                        digits.erase(digits.begin()+i);
                        count++;
                        i--;
                    }
                    if(count==2)
                    break;
                }
            }
        }
        sort(digits.begin(),digits.end(),greater<int>());
        string ans="";

        for(auto digit:digits){
            ans+=to_string(digit);
        }
        if(ans.size()>0&&ans[0]=='0')
        return "0";
        return ans;
    }
};