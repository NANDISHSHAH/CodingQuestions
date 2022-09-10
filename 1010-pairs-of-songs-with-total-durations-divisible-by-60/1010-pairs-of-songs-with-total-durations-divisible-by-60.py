class Solution:
    def numPairsDivisibleBy60(self, time: List[int]) -> int:
        d = defaultdict(int)
        target = 60 
        count = 0
        for i, v in enumerate(time):
            if v % 60 == 0:
                count += d[0]
            else:
                count += d[target - v % 60]
            d[v % 60] += 1
        
        return count
