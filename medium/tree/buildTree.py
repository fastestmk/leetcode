class TreeNode:
	def __init__(self, val):
		self.val = val
		self.left = None
		self.right = None

inorder_dict = {}

def buildTree(preorder, inorder):
	n = len(inorder)
	for i, val in enumerate(inorder):
		inorder_dict[val] = i
	pre_iter = iter(preorder) # iterator
	
	def makeTree(start, end):
		if start > end:
			return None
		root_val = next(pre_iter)
		root = TreeNode(root_val)
		inorder_idx = inorder_dict[root_val]
		root.left = makeTree(start, inorder_idx-1)
		root.right = makeTree(inorder_idx+1, end)
		return root 	

	return makeTree(0, len(inorder)-1)	


def printPreorder(root):
	if root == None:
		return
	print(root.val, end = " ")
	printPreorder(root.left)
	printPreorder(root.right)	
if __name__ == '__main__':
	preorder = [3,9,20,15,7]
	inorder = [9,3,15,20,7]
	root = buildTree(preorder, inorder)
	printPreorder(root)