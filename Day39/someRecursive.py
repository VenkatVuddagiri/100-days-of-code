# Write a recursive function which accepts an array and a callback.
# The function returns true if a single value returns true when passed to the callback function else it returns false


def isOdd(num):
    if num%2==0:
        return False
    else:
        return True
        
def someRecursive(arr, cb):
    if(cb(arr[0])):
        return True
    elif(len(arr)==1):
        return cb(arr[0])
    return someRecursive(arr[1:],cb)

print(someRecursive([1,2,3,4],isOdd))