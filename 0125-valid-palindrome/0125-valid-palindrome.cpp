class Solution {
public:
    bool isPalindrome(string s) {
    int len=s.size();
    string backward;
    int left = 0;
    string final;
    for(int i=0;i<len ;i++){

        if(isalnum(s[i]) ){
        backward=tolower(s[i]);
        
        final.append(backward);
        
    

    } 
}
    cout<<final;



    int l =0;
    int r= final.size()-1;
    while(l<r){
        if(final[l] != final[r]){
            return false;
        }
 
        l++;
        r--;
    }
    return true;
    }
};