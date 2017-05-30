import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("l_beg.csv")
df.plot(kind='scatter', x='N', y='T', title="Insert to the start of a list")
plt.savefig('l_beg.png')