class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            int x=0;
            for(int k=i;k<arr.size();k++){
            x^=arr[k];
            if(x==0){count+=(k-i);}
        }

        }
        
       return count;
        
    }
};