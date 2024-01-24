#!/usr/bin/python3
""" return the primeter of an island area"""


def island_perimeter(grid):
    p = 0
    for row_idx, row in enumerate(grid):
        for elm_idx, elm in enumerate(row):
            if elm == 1:
                if row[elm_idx - 1] == 0:
                    p += 1
                if row[elm_idx + 1] == 0:
                    p += 1
                if grid[row_idx - 1][elm_idx] == 0:
                    p += 1
                if grid[row_idx + 1][elm_idx] == 0:
                    p += 1
    return p
