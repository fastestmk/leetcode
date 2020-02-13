class TreeNode:
	def __init__(self, val):
		self.val = val
		self.left = None
		self.right = None

res = []

def preorder(root, depth):
	if root == None:
		return True
	if len(res) == depth:
		res.append([]) # appending empty list
	res[depth].append(root.val)
	preorder(root.left, depth+1)
	preorder(root.right, depth+1)	


def levelOrder(root):
	global res
	preorder(root, 0)
	return res

if __name__ == '__main__':
	root = TreeNode(1)
	root.left = TreeNode(2)
	root.right = TreeNode(2)
	root.left.left = TreeNode(3)
	root.left.right = TreeNode(4)
	root.right.left = TreeNode(4)
	root.right.right = TreeNode(3)

	print(levelOrder(root))