/**
 * @param {string} s
 * @return {boolean}
 */


var isPalindrome = function(s) {
    let toLow = s.replace(/[^a-z0-9]/gi,"").toLowerCase();
    let next = toLow.split("").reverse().join("");
   return toLow===next ? true : false;
};