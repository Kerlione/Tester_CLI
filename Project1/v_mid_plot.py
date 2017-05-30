import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("v_mid.csv")
df.plot(kind='scatter', x='N', y='T', title="Insert to the middle of a vector")
plt.savefig('v_mid.png')
