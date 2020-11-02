# Write a function flatten which accepts a list as an input and returns a flattened list


# def flatten(arr):
#     if(type(arr)!=list):
#         return arr
#     elif(type(arr)==list):
#         return flatten(arr[0])
#     return [arr[0],flatten(arr[1:])]

def flatten(arr):
    resultArr = []
    for custItem in arr:
        if type(custItem) is list:
            resultArr.extend(flatten(custItem))
        else: 
            resultArr.append(custItem)
    return resultArr 

print(flatten([1,2,3,[4,[5]]]))