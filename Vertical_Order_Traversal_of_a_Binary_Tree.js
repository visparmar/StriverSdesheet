//Vertical_Order_Traversal_of_a_Binary_Tree


var verticalTraversal = function(root) {
    let row,col;
    let ans = [];
    let hash={}
    findCoordinate(root,0,0,hash);

  Object.keys(hash).map(Number).sort((a, b) => a - b).map((item) => {
    let row=hash[item];
    let newArr=[]
    // sorting the value according the level of branch lesser no. of branch come first
    row.sort((a, b) => {
  const keyA = parseInt(Object.keys(a)[0], 10); // Extract the key from the first object
  const keyB = parseInt(Object.keys(b)[0], 10); // Extract the key from the second object

  return keyA - keyB; // Compare the keys for ascending order
});
    for(let i=0;i<row.length;i++){
        // here sorting if the one two or more than two value lie on the same level or index the sort them like ex 3 (6,5)
    newArr=newArr.concat(row[i][Object.keys(row[i])].sort((a,b)=>a-b))
    }
    ans.push(newArr)
    });
  return ans;
};

function findCoordinate(root, row, col, hash) {
    if (root === null)return;
   
    const key = `${col}`;
    const subkey=`${row}`;
    if (!hash[key]) {
        hash[key] = [{[subkey]:[root.val]}]; 
    } else {
         let res=hash[key].find((item)=>item[subkey]!=undefined)
         if(!res){
          hash[key].push({[subkey]:[root.val]}); 
         }else{
            res[subkey].push(root.val)
         }
         
    }

    findCoordinate(root.left, row + 1, col - 1, hash);
    findCoordinate(root.right, row + 1, col + 1, hash);
}
