/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(numbers, target) {
    let end = numbers.length-1;
    let start = 0;
    while(start<end){
        let sum = numbers[start] + numbers[end];
        if(sum==target){
            return [1+start,1+end];
        }
       else if(sum>target) end--
        else start++;
    }
};