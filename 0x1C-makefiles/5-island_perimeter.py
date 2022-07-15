#!/usr/bin/python3
""" Module island """


def island_perimeter(grid):
    """ calculate island perimeter """
    P = 0
    rule = [4, 3, 2, 1, 0]
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                nb1 = 0
                if j - 1 >= 0:
                    if grid[i][j - 1] == 1:
                        nb1 += 1
                if j + 1 < len(grid[i]):
                    if grid[i][j + 1] == 1:
                        nb1 += 1
                if i - 1 >= 0:
                    if grid[i - 1][j] == 1:
                        nb1 += 1
                if i + 1 < len(grid):
                    if grid[i + 1][j] == 1:
                        nb1 += 1
                P += rule[nb1]
    return str(P)
