import pandas as pd
import matplotlib.pyplot as plt

m = pd.read_csv("cmp_beg.csv")
ax = m.plot(kind='scatter', x='N', y='V', title="Insert to begin", color="Red", label='Vector')
m.plot(kind='scatter', x='N', y='L', title="Insert to begin", color="Blue", label='List', ax=ax)
plt.savefig('cmp_beg.png')
