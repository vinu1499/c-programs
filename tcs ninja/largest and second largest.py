a=list(map(int,input().split()))
l=len(a)
for i in range(0,l):
    for j in range(i+1,l):
        if(a[i]>a[j]):
            t=a[i]
            a[i]=a[j]
            a[j]=t
print(a[l-1],'',a[l-2])
