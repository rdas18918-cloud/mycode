l=input().split()

nums=[]
for x in l:
    nums.append(int(x))
    
total=0
for x in nums:
    total+=x

avg=total/len(nums)

count=0
for x in nums:
    if x>avg:
        count+=1
        
print(count)
print("█████  █   █  █████  █   █  █   █        █   █  █████  █   █")
print("  █    █   █  █   █  ██  █  █  █         █   █  █   █  █   █")
print("  █    █████  █████  █ █ █  ███           █ █   █   █  █   █")
print("  █    █   █  █   █  █  ██  █  █           █    █   █  █   █")
print("  █    █   █  █   █  █   █  █   █          █    █████  █████")
