var minSubArrayLen = function(target, nums) {
	let minLength = nums.length+1;
	let windowSum = 0;
	let wStart = 0;
	let wEnd = 0;

	while(wEnd>=wStart && wEnd<nums.length){
		if(windowSum<target){
			windowSum += nums[wEnd];
			wEnd++;
		}
		while(windowSum>=target && wEnd>=wStart){
			minLength = Math.min(wEnd-wStart,minLength);
			windowSum -= nums[wStart];
			wStart++;
		}
	}
	if(minLength===nums.length+1){
		minLength = 0;
	}
	return minLength;
};