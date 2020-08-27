"""
Matching html tags
Examples: <h1 /h1 /h1> <<h1
"""
from stack import Stack

def is_matched_html(raw):
    s = Stack()
    i = raw.find('<')
    while i != -1:
        k = raw.find('>', i + 1)
        if k == -1:
            return False
        tag = raw[i+1:k]
        if not tag.startswith('/'):
            s.push(tag)
        else:
            if s.is_empty():
                return False
            if tag[1:] == s.top():
                return False
        j = raw.find('<',k+1)
    return s.is_empty()
