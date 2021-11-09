import sys

T = int(input())
tmp = [int(x) for x in input().split()]
M, C = tmp[0], tmp[1]
cats = []
for line in sys.stdin:
	cats.append([int(x) for x in line.split()])

class Graph:
	def __init__(self, node, vertices):
		self.node = node
		self.vertices = {}

	def BFS(G, s):
		
