l=input().split()
result=[]

for x in l:
    result.append(int(x))

flag=True

for i in range(len(result)-1):
    if result[i]>=result[i+1]:
        flag=False
        break

print(flag)
#comment