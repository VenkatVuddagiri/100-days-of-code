# Write a function collectStrings which accepts an object and returns an array of all the values in the object
def collectStrings(obj):
    result=[]
    if type(obj)==dict:
        for key,value in obj.items():
            if(type(value)==dict):
                result.extend(collectStrings(value))
            else:
                result.append(value)
    return result

obj = {
    "stuff":"boo",
    "data":{
        "val":{
            "thing":{
                "info":"bar",
                "moreInfo":{
                    "evenMoreInfo":{
                        "weMadeIt":"baz"
                    }
                }
            }
        }
    }
}

print(collectStrings(obj))