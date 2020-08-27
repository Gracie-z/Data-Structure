"""
The stack data structure has the five following methods:
len(), is_empty(), push(), pop(), top()
"""

class Empty(Exception):
    """Error attempting to access an element from an empty container"""
    pass

class Stack():
    def __init__(self):
        self.__stack = []

    def __len__(self):
        return len(self.__stack)

    def is_empty(self):
        return self.__len__ == 0

    def push(self, e):
        self.__stack.append(e)

    def pop(self):
        if self.is_empty():
            raise Empty('Stack is empty!')
        self.__stack.pop

    def top(self):
        if self.is_empty():
            raise Empty('Stack is empty!')
        return self.__stack[-1]
        