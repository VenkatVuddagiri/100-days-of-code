#  Write a recursive function called capitalizeFirst which accpepts an array of strings and returns capitalized words
def capitalizeFirst(arr):
    temp=[]
    if(len(arr)==1):
        temp.append(arr[0].capitalize())
        return temp
    if not arr[0][0].isupper():
        temp.append(arr[0].capitalize())
        temp.extend(capitalizeFirst(arr[1:]))
    return temp

(capitalizeFirst(['arya','venkat','apple','banana']))