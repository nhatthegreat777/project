#%matplotlib inline

# Import numpy and matplotlib for some quick examples
import numpy as np
import matplotlib.pyplot as plt

# some data
lengths = [75, 50, 90, 115] # cm's
weights = [17.5, 10, 18, 20] # kg's

# Plot the data: Always visualize your data!
fig, ax = plt.subplots()
ax.plot(lengths, weights, '.', ms=15)
ax.set(xlabel='Length (cm)', ylabel='weight (kg)', xlim=[30,125], ylim=[5,25]);
fig
