T=int(input())
for i in range(T):
    n,k,s=map(int,input().split())
    re1=k
    re2=k
    re1+=k-s
    re1+=n-s
    re2+=n
    if(re1<re2):
        print("Case #"+str(i+1)+": "+str(re1))
    else:
        print("Case #"+str(i+1)+": "+str(re2))