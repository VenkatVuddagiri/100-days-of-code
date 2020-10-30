def sumOfDigits(n):
    assert (n>=0 and int(n)==n), "The number should be positive integer"
    if n in range(10):
        return n
    else:
        return sumOfDigits(n//10)+n%10
n=int(input())
print(sumOfDigits(n))