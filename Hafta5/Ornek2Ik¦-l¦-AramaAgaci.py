import numpy as np
import random
import math

class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

class Tree:
    def __init__(self, key):
        self.root = Node(key)
        self.count = 1
        self.avarageDepth = 0
        
        self.insertDepth = 1

    def insertos(self, key):
        self.inserti(key)
        tmpAvarage = self.avarageDepth * self.count
        tmpAvarage += self.insertDepth
        self.count += 1
        self.avarageDepth = float(tmpAvarage) / self.count
        self.insertDepth = 1

    def inserti(self, key, root=None):
        if self.insertDepth == 1:
            r = self.root
        else:
            r = root

        if r.value > key:
            if r.left is None:
                r.left = Node(key)
            else:
                self.insertDepth += 1
                self.inserti(key, r.left)
        else:
            if r.right is None:
                r.right = Node(key)
            else:
                self.insertDepth += 1
                self.inserti(key, r.right)
total = 0

for count in range(10):
    data = random.sample(range(-500, 500), k=1000)
    t = Tree(data[0])

    for i in range(len(data)-1):
        t.insertos(data[i+1])

    print(t.count, t.avarageDepth)
    total += t.avarageDepth

print(math.log(100, 2))
