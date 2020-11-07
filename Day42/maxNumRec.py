def maxNumRecursive(a,n):
    if n==1:
        return a[0]
    return max(a[n-1],maxNumRecursive(a,n-1))

print(maxNumRecursive([12,3,4,35,6,3],6))