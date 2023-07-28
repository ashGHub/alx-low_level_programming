#!/usr/bin/python3

"""
This is a module for island perimeter
"""

def island_perimeter(grid):
    """finds the perimeter of an island"""
    result = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 0:
                continue
            top = grid[i - 1][j] if i - 1 >= 0 else  0
            left = grid[i][j - 1] if j - 1 >= 0 else 0
            result += 4
            if top == 1:
                result -= 2
            if left == 1:
                result -= 2
    return result
