import sys
import os
from os import listdir

test=os.listdir()

for item in test:
    if item.endswith(".o") or item.endswith('.exe'):
        os.remove(item)