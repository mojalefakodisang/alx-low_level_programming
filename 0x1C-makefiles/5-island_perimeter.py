#!/usr/bin/python3
""" Island perimeter module
"""

def island_perimeter(grid):
    """island_perimeter function"""
    peri = 0
    n_rows = len(grid)
    n_cols = len(grid)

    for i in range(n_rows):
        for j in range(n_cols):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    peri += 1
                if i == n_rows - 1 or grid[i + 1][j] == 0:
                    peri += 1
                if j == 0 or grid[i][j - 1] == 0:
                    peri += 1
                if j == n_cols - 1 or grid[i][j + 1]:
                    peri += 1
    return peri
