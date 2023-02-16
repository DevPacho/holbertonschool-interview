#!/usr/bin/python3

""""
Write a method that determines if a given data set represents a valid
UTF-8 encoding.

• Prototype: 'def validUTF8(data)'
• Return: True if data is a valid UTF-8 encoding, else return False.
• A character in UTF-8 can be 1 to 4 bytes long.
• The data set can contain multiple characters.
• The data will be represented by a list of integers.
• Each integer represents 1 byte of data, therefore you only need to handle
the 8 least significant bits of each integer.
"""


def validUTF8(data):
    """
    Determines if a given data set represents a valid UTF-8 encoding.
    """

    bytes_length = 0
    shift_to_7 = 0b10000000
    shift_to_6 = 0b01000000

    for byte in data:
        shift_right_find_first_bit0 = 0b10000000

        if bytes_length == 0:
            while shift_right_find_first_bit0 & byte:
                bytes_length += 1
                shift_right_find_first_bit0 = shift_right_find_first_bit0 >> 1

            if bytes_length == 0:
                continue

            if bytes_length == 1 or bytes_length > 4:
                return False

        else:
            if not (byte & shift_to_7 and not (byte & shift_to_6)):
                return False

        bytes_length -= 1

    return bytes_length == 0
