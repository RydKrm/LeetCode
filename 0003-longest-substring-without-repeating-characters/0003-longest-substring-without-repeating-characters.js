var lengthOfLongestSubstring = function(s) {
    var arr = new Array(128).fill(0);
    var i = j = 0;
    var n = s.length;
    var len = 0;
    while (i < n && j < n) {
        if (arr[s.charCodeAt(i)] === 0) {
            arr[s.charCodeAt(i++)] = 1;
            len = Math.max(len, i - j);
        } else {
            arr[s.charCodeAt(j++)] = 0;
        }
    }
    return len;
};
