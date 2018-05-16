import unittest
import math
from PythonApplication1 import *


class Test(unittest.TestCase):
    
    def testOne(self):
        path = "C:/Users/Administrator/source/repos/PythonApplication1/PythonApplication1/TSP.txt"
        
        print(Path.toList(path)[80])
        #9	68.921	62.248
        #81	54.701	3.0541
        self.assertEqual( Path.toList(path)[8][1], 68.921)
        self.assertEqual( Path.toList(path)[80][2], 3.0541)

    def testTwo(self):
        path = "C:/Users/Administrator/source/repos/PythonApplication1/PythonApplication1/TSP.txt"
        
        lenght5to10 = ((16.565-74.815)**2+(58.704-35.073)**2)**(0.5)
        list = Path.toList(path)
        lenght = Path.vecLenght(4,9,list)

        print(lenght5to10)
        print(lenght)

        self.assertEqual([5,16.565,35.073], list[4])
        self.assertEqual([10,74.815,58.704], list[9])

        self.assertEqual(lenght5to10, lenght)

    def testSumLenght(self):
        path = "C:/Users/Administrator/source/repos/PythonApplication1/PythonApplication1/TSP.txt"
        
        list = Path.toList(path)
        lenght = Path.lenghtEasy(list)

        print(lenght)

        self.assertGreater(lenght, 0)

