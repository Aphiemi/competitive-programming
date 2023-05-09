
class Solution {
    
public:
    
    string sortSentence(string s) {
        int j=0, l[9];
        string word[9];
        string swapp;
        for(auto x: s){
            if(x!=' '){
                word[j] = word[j] + x;
            }else{
                j++;
            }
        }
        s.erase();
        for(int i=0; i<j+1;i++){
            for(int k=i; k<j+1; k++){
                if ((int)word[i].back()>(int)word[k].back()){
                    swapp = word[i];
                    word[i] = word[k];
                    word[k] = swapp;
                }
            }
            word[i][word[i].length()-1]=' ';
            s = s + word[i];
            if(i==j){
                s.erase(s.length()-1);
            }
        }      
        return s;
    }    
};