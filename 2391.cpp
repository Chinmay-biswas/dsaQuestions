class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int total=0;
        int gt=0,trag=0;
        int pt=0,trap=0;
        int mt=0,tram=0;
        for(int i=0;i<garbage.size();i++){
             for(int j=0;j<garbage[i].size();j++){
                if(garbage[i][j]=='M'){
                    mt++;
                }
                if(garbage[i][j]=='P'){
                    pt++;
                }
                if(garbage[i][j]=='G'){
                    gt++;
                }
            
        }
        if(mt){total+=mt+tram;mt=0;tram=0;}
        
        if(pt){total+=pt+trap;pt=0;trap=0;}
       
        if(gt){total+=gt+trag;gt=0;trag=0;}
        
        if(i < travel.size()){
                tram += travel[i];
                trap += travel[i];
                trag += travel[i];
            }
        
        }
        return total;
        
    }
};