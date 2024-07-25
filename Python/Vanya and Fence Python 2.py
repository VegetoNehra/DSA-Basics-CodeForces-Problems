# Read input
n, h = map(int, input().strip().split())#strip removes witespaces  and split separates numbers
heights = list(map(int, input().strip().split()))
#n ini this program is useless asit does not limit the user's input
# Calculate the minimum width of the road
width = 0
for height in heights:
    if height > h:
        width += 2
    else:
        width += 1
 
# Output the result
print(width)
