list = [1,2,3,4,5,6,5,8,22,4,7]
def max(list):
    if len(list) == 1:
        return list[0]
    else:
        if list[0] > list[1]:
            list[1] = list[0]
        return max(list[1:])
print(max(list))

