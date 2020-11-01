#Write a function called recursive Range which accpets a number and     adds up all the numbers from 0 to the number passed to the function
def recursiveRange(num):
    if num==1:
        return 1
    else:
        return num+recursiveRange(num-1)

print(recursiveRange(6))
print(recursiveRange(10))