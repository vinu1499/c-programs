n=int(input())
p=1
while n>=p:
	r=(n//p)%100
	n=n-(r)*p+(((r%10)*10)+r//10)*p
    p*=100
print(n)
