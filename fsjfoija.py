l=input().split(',')

min_word=l[0]
min_len=len(l[0])

for w in l:
    if len(w) <= min_len:
        min_len=len(w)
        min_word=w
print(min_word)
        
