#!/usr/bin/python3

""""
Write a method that determines if a given data set represents a valid UTF-8 encoding.

• Prototype: 'def validUTF8(data)'
• Return: True if data is a valid UTF-8 encoding, else return False.
• A character in UTF-8 can be 1 to 4 bytes long.
• The data set can contain multiple characters.
• The data will be represented by a list of integers.
• Each integer represents 1 byte of data, therefore you only need to handle the 8 least significant bits of each integer.
"""


def validUTF8(data):
    arrayDataLen = len(data)

    for i in range(arrayDataLen):
        if (data[i] & 0b10000000) == 0b00000000:
            # single byte character
            continue
        elif (data[i] & 0b11100000) == 0b11000000:
            # 2-byte character
            if i + 1 >= arrayDataLen or (data[i + 1] & 0b11000000) != 0b10000000:
                return False
            i += 1
        elif (data[i] & 0b11110000) == 0b11100000:
            # 3-byte character
            if i + 2 >= arrayDataLen or (data[i + 1] & 0b11000000) != 0b10000000 or (data[i + 2] & 0b11000000) != 0b10000000:
                return False
            i += 2
        elif (data[i] & 0b11111000) == 0b11110000:
            # 4-byte character
            if i + 3 >= arrayDataLen or (data[i + 1] & 0b11000000) != 0b10000000 or (data[i + 2] & 0b11000000) != 0b10000000 or (data[i + 3] & 0b11000000) != 0b10000000:
                return False
            i += 3
        else:
            return False
    return True
