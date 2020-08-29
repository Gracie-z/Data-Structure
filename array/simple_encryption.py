'''
class Cipher takes a string and encrypt or decrypt it
by shifting the alphabetical order.
'''


class Cipher:
    def __init__(self, shift, inp="", outp = ""):
        self.inp = inp
        self.shift = shift
        self.outp = outp

    def encrypt(self):
        L = []
        for i in self.inp:
            before = ord(i) - ord('a')
            after = (before + self.shift) % 26 + ord('a')
            L.append(chr(after))
        return ''.join(L)
    
    def decrypt(self):
        L = []
        for i in self.outp:
            before = ord(i) - ord('a')
            after = (before - self.shift) % 26 + ord('a')
            L.append(chr(after))
        return ''.join(L)



if __name__=='__main__':
    c = Cipher(inp="abd",shift=1)
    print(c.encrypt())
    d = Cipher(outp="hey", shift =2)
    print(d.decrypt())
   
