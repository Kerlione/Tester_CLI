import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("v_beg.csv")
df.plot(kind='scatter', x='N', y='T', title="Insert to the start of a vector")
plt.savefig('v_beg.png')
