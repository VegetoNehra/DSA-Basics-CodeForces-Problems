n=int(input()) #No of problems
soln = 0
for _ in range(n):
    decision=list(map(int,input().strip().split()))
    count=0
    for i in decision:
        if i==1:
            count+=1
    if count>=2:
        soln+=1
print(soln)
            


        