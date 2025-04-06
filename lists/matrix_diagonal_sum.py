class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        sum_out, len_m = 0, len(mat)
        for i in range(len_m):
            sum_out += mat[i][i] # adding primary diagnal
            sum_out += mat[i][len_m - 1 - i] # adding secondary diagnal
        if len_m % 2:
            return sum_out - (mat[len_m // 2][len_m // 2])
        else:
            return sum_out - 0