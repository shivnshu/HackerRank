# Enter your code here. Read input from STDIN. Print output to STDOUT
string = raw_input()
sub = raw_input()
count = 0

for i in range(0, len(string)-len(sub)+1):
    if string[i:i+len(sub)] == sub:
        count += 1
        
print count
