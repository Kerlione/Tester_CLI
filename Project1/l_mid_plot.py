import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("l_mid.csv")
df.plot(kind='scatter', x='N', y='T', title="Insert to the middle of a list")
plt.savefig('l_mid.png')