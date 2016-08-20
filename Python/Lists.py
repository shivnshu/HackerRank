# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(raw_input())
L = []

for i in range(0,n):
    s = raw_input().split()
    
    if s[0]=='insert':
        L.insert(int(s[1]),int(s[2]))
    elif s[0]=='print':
        print L
    elif s[0]=='remove':
        L.remove(int(s[1]))
    elif s[0]=='append':
        L.append(int(s[1]))
    elif s[0]=='sort':
        L.sort()
    elif s[0]=='pop':
        L.pop()
    else:
        L.reverse()
