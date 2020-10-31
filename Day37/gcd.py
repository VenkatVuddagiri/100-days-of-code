def gcd(a,b):
    assert int(a)==a and int(b)==b,"Both numbers should be integers"
    if(a<0):
        a=-a
    if(b<0):
        b=-b
    if(b==0):
        return a
    else:
        return gcd(b,a%b)
a=int(input())
b=int(input())
print(gcd(a,b))