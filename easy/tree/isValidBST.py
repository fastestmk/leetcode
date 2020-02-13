class TreeNode:
	def __init__(self, val):
		self.val = val
		self.left = None
		self.right = None

def validate(root, prev):
	if root == None:
		return True
	if prev != None and prev.val >= root.val:
		return False
	prev = root
	return validate(root.right, prev)		

def isValidBST(root):
	prev = None
	return validate(root, prev)


if __name__ == '__main__':
	root = TreeNode(8)
	root.left = TreeNode(5)
	root.right = TreeNode(12)
	root.left.left = TreeNode(4)
	root.left.right = TreeNode(6)
	root.right.left = TreeNode(10)
	root.right.right = TreeNode(14)

	print(isValidBST(root))