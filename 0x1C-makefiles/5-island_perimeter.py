#!/usr/bin/python3
""" a module that finds the perimeter of an island"""


def island_perimeter(grid):
    """ calculates the perimeter of a island """
    prm = 0
    ac = len(grid[0])
    for a in range(len(grid)):
        for b in range(ac):
            if grid[a][b] == 1:
                if grid[a-1][b] == 0:
                    prm += 1
                if grid[a][b + 1] == 0:
                    prm +=1
                if grid[a + 1][b] == 0:
                    prm +=1
                if grid[a][b - 1] == 0:
                    prm +=1
    return prm 
