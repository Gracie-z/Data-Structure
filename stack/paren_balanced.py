"""
Examples: (), ()(), (({[]})) <- balanced
          ((), {{{)}], [][]]] <- not balanced
"""

class Stack:
    def __init__(self):
        self.stack = []
    
    def pop(self):
        self.stack.pop()
    
    def push(self, num):
        self.stack.append(num)
    
    def peek(self):
        return self.stack[-1]

def is_paren_balanced(string):
    D = {')':'(','}':'{',']':'['}
    s = Stack()
    result = True
    for paren in string:
        if paren in "([{":
            s.push(paren)
        elif paren in ")]}":
            if s.stack:
                if D[paren] == s.peek():
                    s.pop()
                else:
                    result = False
                    break
            else:
                result = False
                break
    if s.stack:
        result = False
    return result

if __name__ == "__main__":
    print(is_paren_balanced("[][]]]"))



        
