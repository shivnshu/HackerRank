# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(raw_input())

num = raw_input().split()

l = []

for i in range(0, n):
    l.append(int(num[i]))
    
print hash(tuple(l))
