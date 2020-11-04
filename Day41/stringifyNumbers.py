#  Write a function stringifyNumbers that accepts an object and returns an object with all the values as strings

def stringifyNumbers(obj):
    if type(obj)==dict:
        for key,value in obj.items():
            if type(value) is int:
                obj[key]=str(value)
            else:
                stringifyNumbers(obj[key])
    return obj

obj={
    "num":1,
    "test":[],
    "data":{
        "val":4,
        "info":{
            "isRight":True,
            "random":66
        }
    }
}

print(stringifyNumbers(obj))