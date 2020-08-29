class Node(object):
    def __init__(self,name):
        self.name=name
        self.adjacencylist=[]
        self.visited=False
        self.predecessor=None
class DepthFirstSearch(object):
    def dfs(self,start):
        start.visited=True
        print("%s " %start.name)

        for n in start.adjacencylist:
            if not n.visited:
                self.dfs(n)



node1=Node("A")
node2=Node("B")
node3=Node("C")
node4=Node("D")
node5=Node("E")

node1.adjacencylist.append(node2)
node1.adjacencylist.append(node3)
node2.adjacencylist.append(node4)
node2.adjacencylist.append(node5)

df=DepthFirstSearch()
df.dfs(node1)
