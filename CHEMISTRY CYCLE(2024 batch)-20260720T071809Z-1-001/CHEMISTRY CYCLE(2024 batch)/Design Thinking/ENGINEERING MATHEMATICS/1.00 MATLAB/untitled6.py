# -*- coding: utf-8 -*-
"""
Created on Tue Jun 10 00:52:10 2025

@author: Mukul Prasad
"""

import sympy as sp
x,y=sp.symbols('x,y')
f=input("enter function ")
lf=sp.lambdify([x,y],f)
fx=sp.diff(f,x)
fy=sp.diff(f,y)
solutions=sp.solve([fx,fy],(x,y),dict=True)
critical_points=[]

for sol in solutions:
    if x in sol and y in sol:
        xi,yi=sol[x],sol[y]
        if xi.is_real and yi.is_real:
        
            critical_points.append(sol)
            
            
            
fxx=sp.diff(fx,x)
fyy=sp.diff(fy,y)
fxy=sp.diff(fx,y)
A=sp.lambdify([x,y],fxx)
B=sp.lambdify([x,y],fxy)
C=sp.lambdify([x,y],fyy)
for sol in critical_points:
    xi,yi=sol[x],sol[y]
    Cond=A(xi,yi)*C(xi,yi)-B(xi,yi)**2
    if Cond>0 and A(xi,yi)>0:
        print(f'{sol} is minima')
    elif Cond>0 and A(xi,yi)<0:
     print(f'{sol} is maxima')
    elif Cond<0:
         print(f'{sol} is saddle point')
    else:
        print('No conclusions')
        
         
         