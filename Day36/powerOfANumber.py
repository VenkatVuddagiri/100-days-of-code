def power(n,p):
    assert int(p)==p, "The power should be an integer only"
    # assert n!=0, "The base cannot be zero"
    if(n==0):
        return 0
    if(p==0):
        return 1
    elif(p>0):
        return n*power(n,p-1)
    else:
        return (1/n)*power(n,p+1)
n=int(input())
p=int(input())
print(power(n,p))