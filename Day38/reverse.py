# Write a function named reverse which accpets a string input and reverses the string using recursion

def reverse(strng):
    if len(strng)==0:
        return ""
    else:
        return strng[len(strng)-1]+reverse(strng[:len(strng)-1:])

print(reverse("python"))
print(reverse("Venkat"))