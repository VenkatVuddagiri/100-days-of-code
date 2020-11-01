#Write a function called productOfArray whichtakes in an array of numbers and returns the product of them all

def productOfArray(arr):
    if len(arr)==1:
        return arr[0]
    else:
        return arr[0]*productOfArray(arr[1:])

print(productOfArray([1,2,3]))
print(productOfArray([1,2,3,10]))