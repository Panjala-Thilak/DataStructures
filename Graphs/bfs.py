class Node(object):
    def __init__(self,name):
        self.name=name
        self.adjacencylist=[]
        self.visited=False
        self.predecessor=None
class Bfs(object):

    def bfs(self,start):
        queue=[]
        queue.append(start)
        start.visited=True

        while queue:

            actual=queue.pop(0)
            print("%s "%actual.name)

            for n in actual.adjacencylist:
                if not n.visited:
                    n.visited=True
                    queue.append(n)

node1=Node("A")
node2=Node("B")
node3=Node("C")
node4=Node("D")
node5=Node("E")

node1.adjacencylist.append(node2)
node1.adjacencylist.append(node3)
node2.adjacencylist.append(node4)
node2.adjacencylist.append(node5)

bf=Bfs()
bf.bfs(node1)
