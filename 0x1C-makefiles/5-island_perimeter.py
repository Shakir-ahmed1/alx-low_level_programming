#!/usr/bin/python3
""" a module that finds the perimeter of an island"""


def island_perimeter(grid):
    """ calculates the perimeter of a island """
    prm = 0
    ac = len(grid[0])
    for a in range(len(grid)):
        for b in range(ac):
            if grid[a][b] == 1:
                if a <= 0 or grid[a-1][b] == 0:
                    prm += 1
                if b >= ac - 1 or grid[a][b + 1] == 0:
                    prm += 1
                if a >= len(grid) - 1 or grid[a + 1][b] == 0:
                    prm += 1
                if b <= 0 or grid[a][b - 1] == 0:
                    prm += 1
    return prm
