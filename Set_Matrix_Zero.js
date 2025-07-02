// **************brute Force*************


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> dummy;
       
        int col=matrix[0].size();
        int row=matrix.size();

for(int i=0;i<row;i++){
     vector<int> check;
    for(int j=0;j<col;j++){
        check.push_back(matrix[i][j]);

    }
    dummy.push_back(check);
}

for(int i=0;i<row;i++){
   
    for(int j=0;j<col;j++){
       if(dummy[i][j]==0){
           int o=0,p=0;
           while(p<col){
               matrix[i][p]=0;
               p++;
           }

            while(o<row){
               matrix[o][j]=0;
            o++;
           }
       }
    }  
}
}
};



//*********************optimal******************* 

var setZeroes = function(matrix) {
    let row =new Array(matrix.length).fill(1);
    let col =new Array(matrix[0].length).fill(1);

    for(let i=0;i<matrix.length;i++){
        for(let j=0;j<matrix[i].length;j++){
            if(matrix[i][j] == 0){
                      row[i] = 0;
                      col[j] = 0;
            }
        }
    }

    // column 
    for(let i=0;i<col.length;i++){
        if(col[i]==0){
            for(let j=0;j<matrix.length;j++){
                 matrix[j][i]=0;
            }
        }
    }

    // for row
    for(let i=0;i<row.length;i++){
        if(row[i]==0){
            for(let j=0;j<matrix[0].length;j++){
                 matrix[i][j]=0;
            }
        }
    }

};

//*************Better**********

var setZeroes = function(matrix) {
    
    let col0 =1;
    for(let i=0;i<matrix.length;i++){
        for(let j=0;j<matrix[i].length;j++){
            if(matrix[i][j] == 0){
                if(j != 0) // first column 
                     matrix[0][j] = 0;
                else
                     col0 = 0;
                matrix[i][0] = 0;
            }
        }
    }

for(let i=1;i<matrix.length;i++){
    for(let j=1;j<matrix[i].length;j++){
           if(matrix[0][j]==0 || matrix[i][0]==0){
            matrix[i][j]=0;
           }
    }
}
// iterate for last left condition which is matrix[0][0] rest is alread cover 

if(matrix[0][0] == 0){
    for(let i=0;i<matrix[0].length;i++) matrix[0][i] =0;
}
if(col0 == 0){
    for(let i=0;i<matrix.length;i++) matrix[i][0] =0;
}
};
