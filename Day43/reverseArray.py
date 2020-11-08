def reverse(a):
    for i in range(len(a)//2):
        other=len(a)-i-1
        temp=a[i]
        a[i]=a[other]
        a[other]=temp
    print(a)


reverse([1,2,3,4,5])