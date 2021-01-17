a,b=map(int,input().split())
c,d=map(int,input().split())
k=0
for i in range(101):
    for j in range(101):
        if(b+a*i==d+c*j):
            print(d+c*j)
            k=1
            break
    if(k==1):
        break
 
if(k==0):
    print('-1')
