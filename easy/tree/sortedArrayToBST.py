class TreeNode:
	def __init__(self, val):
		self.val = val
		self.left = None
		self.right = None


def sortedArrayToBST(nums):
	def makeBST(start, end):
		if start > end:
			return None
		mid = (start+end)//2
		root = TreeNode(nums[mid])
		root.left = makeBST(start, mid-1)
		root.right = makeBST(mid+1, end)	
		return root
	return makeBST(0, len(nums)-1)		

def preorder(root):
	if root == None:
		return
	print(root.val, end=" ")
	preorder(root.left)
	preorder(root.right)

if __name__ == '__main__':
	nums = [-10, -3, -2, 0, 5, 9]
	root = sortedArrayToBST(nums)
	preorder(root)