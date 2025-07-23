import numpy as np
import time

a = list(range(1000000))
b = np.array(a)

start = time.time()
a2 = [x * 2 for x in a]
print("List:", time.time() - start)

start = time.time()
b2 = b * 2
print("NumPy:", time.time() - start)
