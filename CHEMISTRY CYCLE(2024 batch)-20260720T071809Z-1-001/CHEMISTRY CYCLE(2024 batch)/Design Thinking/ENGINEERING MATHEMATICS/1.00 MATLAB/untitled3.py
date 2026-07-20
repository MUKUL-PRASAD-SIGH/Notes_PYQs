# -*- coding: utf-8 -*-
"""
Created on Mon Jun  9 23:50:05 2025

@author: Mukul Prasad
"""


import sympy as sp 
import numpy as np
import math 
x=sp.Symbol('x')
f=input("enter the function ")
lamf=sp.lambdify(x,f,"numpy")
df=sp.diff(f,x)
lamdf=sp.lambdify(x,df,"numpy")
x0=float(input("enter the initial guess"))

for i in range(10000):
    xn=x0-(lamf(x0)/lamdf(x0))
    print(f'iteration{i}\t x={xn}\n')
    if abs(xn-x0)<0.00001 :
        print(f'the required solution is {xn}')
        break
    else:
        x0=xn