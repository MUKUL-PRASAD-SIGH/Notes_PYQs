# -*- coding: utf-8 -*-
"""
Created on Tue Jun 10 00:10:26 2025

@author: Mukul Prasad
"""


import sympy as sp 
x,y=sp.symbols('x,y')
f=input("enter the function ")
a=float(input("enter value of a "))
b=float(input("enter value of b "))
fx=sp.diff(f,x)
fy=sp.diff(f,y)
fxx=sp.diff(fx,x)
fyy=sp.diff(fy,y)
fxy=sp.diff(fx,y)
lf=sp.lambdify([x,y],f)
lfx=sp.lambdify([x,y],fx)
lfy=sp.lambdify([x,y],fy)
lfxx=sp.lambdify([x,y],fxx)
lfyy=sp.lambdify([x,y],fyy)
lfxy=sp.lambdify([x,y],fxy)

taylor=lf(a,b)+(x-a)*lfx(a,b)+(y-b)*lfy(a,b)+(1/2)*((x-a)**2*lfx(a,b)+(y-b)**2*lfyy(a,b)+2*(x-a)*(y-b)*lfxy(a,b))

print(f'{taylor}')