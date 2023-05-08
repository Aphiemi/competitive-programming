class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        print(intervals)
        result = []
        i=0
        for i in range (len(intervals)):
            if not result:
                result.append(intervals[i])
            elif result[-1][1] >= intervals[i][0]:
                print (result)
                if result[-1][1]<intervals[i][1]:
                    result[-1][1] = intervals[i][1]
                    print (result)
            else:
                result.append(intervals[i])
        return result
            
            