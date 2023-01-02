#!/usr/bin/python3

"""
- Prototype: def minOperations(n)
- Returns an integer
- If n is impossible to achieve, return 0

- To remember: https://www.youtube.com/watch?v=03ZepmoVJGI
"""


def minOperations(n):
    """Method that calculates the fewest number of operations needed"""

    half = 2
    number_of_operations = 0

    if n <= 1 or type(n) is not int:
        return 0

    while n > 1:
        if n % half == 0:
            n /= half
            number_of_operations += half
        else:
            half += 1

    return number_of_operations
