import math


class Path:

    def _init_(self):
        pass

    def toList( path ):
        array = []
        multArray = []

        with open(path, "r") as file:
            for i in file:
                array.append([float(n) for n in i.split()])
        return array

    def vecLenght( index1, index2, array ): # returns lenght of vector
        return ((array[index2][1] - array[index1][1])**2+(array[index2][2]-array[index1][2])**2)**(0.5)

    def lenghtEasy(list):
        lenghtSum = 0

        for i in range(0,int(len(list)/2) - 1):
            for y in range(0, len(list)-1):
                lenghtSum += Path.vecLenght(i,y,list)
        return lenghtSum

    def lenght(list, funct):
        pass


def mine():
    pass
