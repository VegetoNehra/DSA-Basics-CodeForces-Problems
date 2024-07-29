def gender(name):
    count=len(name)
    x=0
    for i in range(count):
        isUnique= True
        for j in range(i):
            if name[i]==name[j]:
                isUnique=False
                break
            j+=1  
        if(isUnique):
            x+=1
        i+=1
    
    if(x%2==0):
        print("CHAT WITH HER!")
    elif(x%2!=0):
        print("IGNORE HIM!")
name=str(input())
gender(name)

