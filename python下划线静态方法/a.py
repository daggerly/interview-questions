from b import *
# print _b
# print __b

from c import _c
from c import __cc
print _c, __cc


class A(object):
    _a = 1
    __aa = 2
    @staticmethod
    def my_staticmethd():
        return 'staticmethod'

    @classmethod
    def my_classmethod(cls):
        return cls

    def instensemethod(self):
        return self

    def _f(self):
        return '_f'

    def __ff(self):
        return '__ff'

    def use_ff(self):
        return self.__ff()


a = A()

print dir(A)
print dir(a)

print A._a
# print A.__aa
print a._a
# print a._aa

print A.my_staticmethd()
print a.my_staticmethd()

print A.my_classmethod()
print a.my_classmethod()

# print A.instensemethod()
print A.instensemethod(a)
print a.instensemethod()

print A._f(a)
print a._f()

# print A.__ff(a)
# print a.__ff()

print A.use_ff(a)
print a.use_ff()
