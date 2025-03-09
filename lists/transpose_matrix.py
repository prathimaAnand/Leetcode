class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        rows, cols = len(matrix), len(matrix[0])
        t_matrix = [[0] * rows for i in range(cols) ]

        for row in range(rows): # can we replace rows?
            for col in range(cols): # can we replace cols?
                t_matrix[col][row] = matrix[row][col]

        return t_matrix