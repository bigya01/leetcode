using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long b=0;
        int n=x;
        string Num = to_string(x);
        int length = Num.length();
        for(int i=0;i<length;i++){
            if(x<0){
                return false;
            }
            int a=x%10;
            b=b*10+a;
            x=x/10;
        }
       if(b==n){
        return true;
    }
    else 
        return false;
    }
    
};