def decimalToBinary(n):
    assert n>0, "The number should be a positive integer or zero only!!"
    if(n==0):
        return 0
    else:
        return n%2+(decimalToBinary(n//2)*10)
n=int(input())
print(decimalToBinary(n))