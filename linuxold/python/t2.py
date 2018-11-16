#!/usr/bin/python
import sys

l2=[1,3,[55,9]]
l1=[]
print l2
for x in l2:
	print x
    
print l2[0]
print l2[2][0]
l1.append(9)
l1.append(10)
del l1[0]
print l1
l2.append(12)
l2[2]=7
X=(1,5,9)
X=X[:]+(4,)
print X

for x in xrange(1,10):
	print x,