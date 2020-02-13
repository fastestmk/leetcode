class TreeNode:
	def __init__(self, val):
		self.val = val
		self.left = None
		self.right = None
		self.next = None

def getNextNode(temp):
	nextNode = temp.next
	while nextNode:
		if nextNode.left:
			return nextNode.left
		if nextNode.right:
			return nextNode.right
		nextNode = nextNode.next
	return None			

def connect(root):
	if root == None:
		return None
	while root:
		temp = root
		while temp:
			if temp.left:
				if temp.right:
					temp.left.next = temp.right
				else:
					temp.left.next = getNextNode(temp)
			if temp.right:
				temp.right.next = getNextNode(temp)
			temp = temp.next
		if root.left:
			root = root.left
		elif root.right:
			root = root.right
		else: 
			root = root.next
	return root										

def preorder(root):
	if root == None:
		return
	print(root.val, end = " ")
	preorder(root.left)
	preorder(root.right)	

if __name__ == '__main__':
	root = TreeNode(8)
	root.left = TreeNode(5)
	root.right = TreeNode(12)
	root.left.left = TreeNode(4)
	root.left.right = TreeNode(6)
	root.right.left = TreeNode(10)
	root.right.right = TreeNode(14)
	node = connect(root)
	print(node.val)
	preorder(node)