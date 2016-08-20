# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(raw_input())
l = []
for i in range(0,n):
    s = raw_input().split()
    l.append([s[0], float(s[1]), float(s[2]), float(s[3])])
    
q = raw_input()
k = l.pop()
while k[0]!=q:
    k = l.pop()

dict = (k[1]+k[2]+k[3])/3
    
print "%.2f" % dict
