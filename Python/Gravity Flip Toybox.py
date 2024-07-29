def gravityFlip():
    n=int(input()) #no of columns
    toybox=list(map(int,input().strip().split()))
    toybox.sort()
    for i in toybox:
        print (i , end=" ")
gravityFlip()


