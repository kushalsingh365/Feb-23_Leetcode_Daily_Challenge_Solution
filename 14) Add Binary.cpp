class Solution {
public:
    string addBinary(string a, string b) {
        
        int n1 = a.length(), n2=b.length();
        string ans="";
        int i1=n1-1,i2=n2-1;int carry=0;
        while(i1>=0 || i2>=0|| carry)
        {
            int sum = (i1>=0? (a[i1]-'0') : 0) + (i2>=0 ? (b[i2]-'0'):0) + carry;
            if(sum==2) sum=10;
            else if(sum==3) sum=11;
            ans = to_string(sum%10) +ans;
            carry=sum/10;
            i1--;i2--;
        }
        
        return ans;
    }
};
