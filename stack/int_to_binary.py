"""
Use a stack data structure to convert integer values to binary

Example: 242
"""
from paren_balanced import Stack

def int_to_b(num):
    s = Stack()
    while num > 0:
        if num % 2 == 0:
            s.push('0')
            num = num/2
        elif num % 2 != 0:
            s.push('1')
            num = num // 2
    s.stack.reverse()
    return ''.join(s.stack)

print(int_to_b(242))