def calculatewidth(numfriends,fenceheight):
    friends=list()
    width=0
    for i in range(0,numfriends):
        friends.append(int(input()))
    for i in friends:
        if(i>fenceheight):
            width+=2
        else:
            width+=1
    print(width) 
numfriends=int(input())
fenceheight=int(input())
calculatewidth(numfriends,fenceheight)
