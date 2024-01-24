#!/usr/bin/python3
"""module contains function defination"""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """

    perimeter = 0
    for row_idx, row in enumerate(grid):
        for elm_idx, elm in enumerate(row):
            if elm == 1:
                if elm_idx > 0 and row[elm_idx - 1] == 0:
                    perimeter += 1
                if elm_idx > 0 and row[elm_idx + 1] == 0:
                    perimeter += 1
                if row_idx > 0 and grid[row_idx - 1][elm_idx] == 0:
                    perimeter += 1
                if row_idx > 0 and grid[row_idx + 1][elm_idx] == 0:
                    perimeter += 1
    return perimeter
