class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        output = [[1]] # initial row
        for i in range(numRows - 1): # iterating through list members
            rows = [] # creating new rows for every list members as it is list of lists
            temp_row = [0] + output[-1] + [0] # trick to append zeros in order add elements in row and build new row
            for j in range(len(output[-1]) + 1): # iterating through members of list in the row - previous row + 1
                rows.append(temp_row[j] + temp_row[j+1]) # add 1st & 2nd element in row and iterate to next element
            output.append(rows)
        return output

        