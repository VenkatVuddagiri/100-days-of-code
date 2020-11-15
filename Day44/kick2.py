def numOfDigits(n):
    count=0
    while(n>0):
        count+=1
        n=n//10
    return count
def boringNum(n):
    if(numOfDigits(n)==1):
        return n%2
    elif(numOfDigits(n)==2):
        if(n%2==0):
            n=n//10
            if(n%2==1):
                return True
        return False
    elif(numOfDigits(n)==3):
        if(n%2==1):
            n=n//10
            if(n%2==0):
                n=n//10
                if(n%2==1):
                    return True
        return False
T=int(input())
for i in range(T):
    count=0
    L,R=map(int,input().split())
    for j in range(L,R+1):
        if(boringNum(j)):
            count+=1
    print("Case #"+str(i+1)+":",count)