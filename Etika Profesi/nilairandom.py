import random

def getNilaiRandom():
    return random.randint(88,100)


for i in range(29):
    print(f"=AVERAGE({getNilaiRandom()}, {getNilaiRandom()}, {getNilaiRandom()}, {getNilaiRandom()})")