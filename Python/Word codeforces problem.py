def word(something):
    x=len(something)
    up=0
    low=0
    for i in range(x):
        if something[i].isupper():
            up+=1
        elif something[i].islower():
            low+=1
        i+=1
    if(up>low):
        print(something.upper())
    elif(low>=up):
        print(something.lower())
something=str(input())
word(something)