def crimes():
    n=int(input())  #Number of events
    police=0
    crime=0
    events=list(map(int,input().split()))
    for i in range (n):
        if events[i]>0:
            police+=events[i]
        elif events[i]<0:
            if police>0:
                police-=1
            else:
                crime+=1
    print(crime)

crimes()
