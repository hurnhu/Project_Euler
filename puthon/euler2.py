c = False
a = 2
b = 1
x = 0
even = 0
while c == False:
    x = b + a
    if b < a:
        b = x
#        print b
    elif a < b:
        a = x
#        print a
    print x
    if x % 2 == 0:
        even += x
    if a > 4000000:
        c = True
print "ans is"
print even + 2