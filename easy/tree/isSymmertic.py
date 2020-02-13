class TreeNode:
	def __init__(self, val):
		self.val = val
		self.left = None
		self.right = None

def check(root_1, root_2):
	if root_1 == None and root_2 == None:
		return True
	if root_1 and root_2 and root_1.val == root_2.val:
		return check(root_1.left, root_2.right) and check(root_1.right, root_2.left)
	return False		

def isSymmetic(root):
	return check(root, root)


if __name__ == '__main__':
	root = TreeNode(1)
	root.left = TreeNode(2)
	root.right = TreeNode(2)
	root.left.left = TreeNode(3)
	root.left.right = TreeNode(4)
	root.right.left = TreeNode(4)
	root.right.right = TreeNode(3)

	print(isSymmetic(root))