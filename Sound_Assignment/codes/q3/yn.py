import numpy as np
import matplotlib.pyplot as plt
#If using termux
import subprocess
import shlex
#end if



x=np.array([1.0,2.0,3.0,4.0,2.0,1.0])
k = 20
y = np.zeros(20)

y = np.loadtxt('yn.dat',dtype='double')

print(y)


plt.stem(range(0,k),y)
plt.xlabel('$n$')
plt.ylabel('$y(n)$')
plt.grid()# minor

#If using termux
plt.savefig('../../figs/q3/yn.pdf')
# subprocess.run(shlex.split("termux-open ../figs/xnyn.pdf"))
#else
# plt.show()