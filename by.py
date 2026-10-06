a = [1,2,3,4,5,6,7,8,9]
# rotate upto k number
k=2
print(len(a)) # 9
b = a [ 0 : len(a) - k ]
print("b holo:", b)

c = a [ len(a) - k : len(a) ]
print("c holo:", c)

d = c + b
print(d)