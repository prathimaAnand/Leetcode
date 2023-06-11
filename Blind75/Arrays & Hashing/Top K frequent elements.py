#Bucket sorting
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # count will be number of occurances "i"
        count = {} # hashmap
        freq = [[] for i in range(len(nums) +1)] # array with count as indices and has values

        #counting each values in nums occurs
        for n in nums:
            count[n] = 1 + count.get(n, 0)
        for n, c in count.items():
            freq[c].append(n)
        
        topK = []
        # to search which is top val in k
        for i in range(len(freq)-1, 0, -1): #reverse order
            for n in freq[i]:
                topK.append(n)
                if len(topK) == k:
                    return topK
