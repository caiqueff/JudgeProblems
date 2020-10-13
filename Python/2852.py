def is_vowel(c):
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'


current = 'a'
start = 'a'
alf = [[0] * 26 for _ in range(26)]
for i in range(0, 26):
    for j in range(0, 26):
        alf[i][j] = current
        current = chr(ord(current) + 1)
        if current == '{':
            current = 'a'
    start = chr(ord(start) + 1)
    current = start

key = input()
n = int(input())

for i in range(0, n):
    message = input()

    converted = ""
    j = 0
    words1 = message.split()
    for i, word in enumerate(words1):
        if is_vowel(word[0]):
            converted += word + " "
        else:
            for w in word:
                converted += key[j]
                j += 1
                if j == len(key):
                    j = 0
            converted += " "

    cryptograph = ""
    words2 = converted.split()
    for i, word in enumerate(words1):
        if is_vowel(word[0]):
            cryptograph += word + " "
        else:
            for j in range(0, len(word)):
                row = int(ord(words2[i][j])) - 97
                column = int(ord(word[j])) - 97
                cryptograph += alf[row][column]
            cryptograph += " "
    cryptograph = cryptograph[:-1]
    
    print(cryptograph)
