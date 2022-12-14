#!/usr/bin/python3
""" The perimeter of an island module """


def island_perimeter(grid):
    """ Return the perimeter of the island
    Args:
        grid(list): list of integers with
            - water zone = 0
            - land zone = 1
    """
    width = len(grid[0])
    height = len(grid)
    extrems = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    extrems += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    extrems += 1
    return size * 4 - extrems * 2
