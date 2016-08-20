# Enter your code here. Read input from STDIN. Print output to STDOUT
students = sorted([[raw_input(), float(input())] for _ in range(int(input()))])
secndLow = sorted(list(set(grade for [_, grade] in students)))[1]
print ("\n".join( name for [name, grade] in students if grade == secndLow))
