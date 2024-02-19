from functools import singledispatch

@singledispatch
def sum(a, b):
    raise TypeError("Неподдерживаемые типы")

@sum.register(int)
def _(a: int, b: int) -> int:
    return a + b

@sum.register(float)
def _(a: float, b: float) -> float:
    return a + b

@sum.register(str)
def _(a: str, b: str) -> str:
    return a + b

print(sum(1, 2))    # 3
print(sum(1.5, 2.5))    # 4.0
print(sum("a", "b"))
