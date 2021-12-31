def minion_game(string):
    # your code goes here
    v = 0
    c = 0
    vowels = ['A','E','I','O','U']
    for i in range(len(string)):
        if string[i] not in vowels:
            c += len(string) - i
        if string[i] in vowels:
            v += len(string) - i
    if c > v:
        print("Stuart " + str(c))
    elif v > c:
        print("Kevin " + str(v))
    else:
        print("Draw")
            
            

if __name__ == '__main__':
    s = input()
    minion_game(s)
