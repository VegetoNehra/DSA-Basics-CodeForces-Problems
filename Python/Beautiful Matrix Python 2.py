def BeautifulMatrix():
    matrix=[]
    x=y=0
    for i in range(5):
        row=list(map(int,input().split()))
        matrix.append(row)
        for j in range(5):
            if row[j]==1:
                x=i
                y=j

    moves = abs(x - 2) + abs(y - 2)
    print(moves)
BeautifulMatrix()         
         