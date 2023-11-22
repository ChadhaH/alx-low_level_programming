#!/usr/bin/python3
"""
    returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
        returns the perimeter of the island
        0 represents a water zone
        1 represents a land zone
    """

    w = len(grid[0])
    h = len(grid)
    edge = 0
    size = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return size * 4 - edge * 2
