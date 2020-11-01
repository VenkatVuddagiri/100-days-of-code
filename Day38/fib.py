#Write a recursive function called fib which accepts a number and returns the nth number of fibonacci number series 
def fib(num):
    if num==0:
        return 0
    elif num==1:
        return 1
    else:
        return fib(num-1)+fib(num-2)

print(fib(4))
print(fib(10))
print(fib(28))
print(fib(35))