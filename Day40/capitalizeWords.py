# Write a function capitalizeWords which accepts an array of strings and returns the array with the same strings in upper case

def capitalizeWords(arr):
    temp=[]
    if(len(arr)==1):
        temp.append(arr[0].upper())
        return temp
    if not arr[0][0].isupper():
        temp.append(arr[0].upper())
        temp.extend(capitalizeWords(arr[1:]))
    return temp

print(capitalizeWords(['i','am','coder','in','python']))