def magnets():
    rep = int(input()) # Number of magnets
    magnet_list = []

    for _ in range(rep):
        mag = int(input())
        magnet_list.append(mag)

    group = 1  # Start with one group

    for j in range(1, rep):
        if magnet_list[j] != magnet_list[j - 1]:
            group += 1

    print(group)

magnets()
