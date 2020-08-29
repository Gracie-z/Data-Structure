'''
Given a list of numbers, sort them in non descending order.
'''


def sort(L):
    for i in range(1, len(L)+1):
        cur = L[i]
        j = i
        while j > 0 and L[j-1] > cur:
            L[j] = L[j-1]
            j -= 1
        L[j] = cur
    return L


