# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(raw_input())
num = raw_input().split()
l = []
for i in range(0,n):
    l.append(int(num[i]))
    
l.sort()
i = -1
while l[i]==l[-1]:
    i = i - 1
print l[i]
