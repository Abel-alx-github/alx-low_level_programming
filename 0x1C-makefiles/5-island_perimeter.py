#!/usr/bin/python3
"""module contains function defination"""


def island_perimeter(grid):
    """ return the primeter of an island area"""
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
