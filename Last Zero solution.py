from sys import stdin,stdout

t=int(stdin.readline())

for i in range(t):
    number = int(stdin.readline())
    count=0
    i=5
    while(number/i>=1):
        count+=int(number/i)
        i*=5
    print(count)