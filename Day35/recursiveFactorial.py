def factorial(n):
    if(n==0):
        return 1
    elif n<0:
        return "Not possible"
    elif(n>0):
        return n*factorial(n-1)
n=int(input())
print(factorial(n))