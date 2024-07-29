def cardgame():
    num=int(input())
    cardlist=list(map(int,input().strip().split()))
    sareja=0
    dima=0
    sarejaturn=True
    for i in range(num):
        if cardlist[0]>=cardlist[-1]:
            #sarejaturn
            x=cardlist.pop(0)
        elif cardlist[-1]>cardlist[0]:
            x=cardlist.pop(-1)
        if sarejaturn:
            sareja+=x
        else:
            dima+=x
        sarejaturn= not sarejaturn
    print(sareja , dima)

cardgame()