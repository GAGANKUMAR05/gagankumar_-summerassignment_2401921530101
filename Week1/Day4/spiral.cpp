class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         int maxr,maxc,minr,minc;
         int n=matrix.size();
         int m= matrix[0].size();
         vector<int> v;
    minr=0;
    minc=0;
    maxr=n-1;
    maxc=m-1;
    while(maxc>=minc&& minr<=maxr){
        int i=minr;
        int j=minc;
        int k=maxr;
        int s=maxc;
        while(j<=s){
            v.push_back(matrix[i][j]);
            j++;
             if(v.size()==(n*m)) return v;
        }
        i++;
        while(i<=k){
            v.push_back(matrix[i][s]);
            i++;
             if(v.size()==(n*m)) return v;
        }
        j=minc;
        s--;
        while(s>=j){
            v.push_back(matrix[maxr][s]);
            s--;
             if(v.size()==(n*m)) return v;
        }
        k--;
        i=minr+1;
        while(k>=i){
            v.push_back(matrix[k][j]);
            k--;
             if(v.size()==(n*m)) return v;
        }
        minr+=1;
        maxr-=1;
        maxc-=1;
        minc+=1;
        
    }

        return v;
    }
};
