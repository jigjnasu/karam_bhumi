from math import pi

class Square(object):
    def area(self, side):
        return side * side

    def perimeter(self, side):
        return 4 * side
    
class Rectangle(object):
    def area(self, length, breadth):
        return length * breadth
    
    def perimeter(self, length, breadth):
        return 2 * (length + breadth)
    
class Circle(object):
    def area(self, radius):
        return pi * radius * radius
    
    def circumference(self, radius):
        return 2 * pi * radius
    
class Sphere(object):
    def volume(self, radius):
        return (4 / 3) * (pi * radius * radius * radius)
    
if __name__ == '__main__':
    s = Sphere()
    print(f'volume of sphere of radius 5 == {s.volume(5)}')