

def solve(s):
    for i in range(len(s) - 1):
        if s[i] == s[i+1]:
            return '%d %d' % (i+1, i+2)

    for i in range(len(s) - 2):
        if s[i] == s[i+2]:
            return '%d %d' % (i+1, i+3)

    return '-1 -1'

s = input()
print(solve(s))
