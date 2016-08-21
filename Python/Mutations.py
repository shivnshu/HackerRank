# Enter your code here. Read input from STDIN. Print output to STDOUT
string = raw_input()
i, q = raw_input().split()
string = string[:int(i)] + q + string[int(i)+1:]
print string
