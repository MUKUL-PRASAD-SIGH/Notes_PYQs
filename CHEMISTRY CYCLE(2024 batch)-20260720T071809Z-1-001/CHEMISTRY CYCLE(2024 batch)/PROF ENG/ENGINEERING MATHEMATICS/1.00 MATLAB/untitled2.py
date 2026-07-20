# -*- coding: utf-8 -*-
"""
Created on Mon Jun  9 22:17:05 2025

@author: Mukul Prasad
"""


import sympy as sp 
import numpy as np
import math 

import matplotlib.pyplot as plt

x=sp.Symbol('x')
f=input('Enter function=')
a=sp.simplify(input('Enter the point'))
n=5,7,9
f1=sp.series(f,x,a,n[0]).removeO()
f2=sp.series(f,x,a,n[1]).removeO()
f3=sp.series(f,x,a,n[2]).removeO()

print(f'Taylor series of expansion{n[0]}:')
sp.pprint(f1)


print(f'Taylor series of expansion{n[1]}:')
sp.pprint(f2)

print(f'Taylor series of expansion{n[2]}:')
sp.pprint(f3)

fl=sp.lambdify(x,f,"numpy")
f1l=sp.lambdify(x,f1,"numpy")
f2l=sp.lambdify(x,f2,"numpy")
f3l=sp.lambdify(x,f3,"numpy")

xV=np.linspace(-5,5,200)

plt.plot(xV,fl(xV),color='blue',label=f'original function f(x):{f}',linestyle='dashed')
plt.plot(xV,f1l(xV),color='green',label=f'Expansion of order {n[0]}')
plt.plot(xV,f2l(xV),color='red',label=f'Expansion of order {n[1]}')
plt.plot(xV,f3l(xV),color='yellow',label=f'Expansion of order {n[2]}')

plt.ylim(-3,3)
plt.xlabel("x")
plt.ylabel("f(x)")
plt.title("Taylor series expansion")
plt.legend()
plt.grid()
plt.show()