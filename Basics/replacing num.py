n=int(input())  //input
rep=int(input())  // num to be replace
repn=int(input())   //replacing num
sum=0
pow=1
while(n>=pow):
    rem=(n//pow)%10
    if rem==rep:
    	rem=repn
    sum=rem*pow+sum
    pow=pow*10
print(n,sum)
