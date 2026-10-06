l=input().split()
res=[]

for x in l:
    if int(x)>50:
        res.append(x)
        
if len(res)==0:
    print(0)
else:
    print("************".join(res))
