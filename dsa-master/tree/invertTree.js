class TreeNode {
  constructor(data) {
    this.data = data;
    this.left = null;
    this.right = null;
  }
}

// Create Binary Tree
function binaryTree() {
  const root = new TreeNode(3);

  root.left = new TreeNode(9);
  root.right = new TreeNode(20);

  root.right.left = new TreeNode(15);
  root.right.right = new TreeNode(7);

  return root;
}

// Stack-based traversal
function print(root) {
  const st = [];

  st.push(root);

  while (st.length > 0) {
    const curr = st.pop();

    console.log(curr.data);

    if (curr.left !== null) {
      st.push(curr.left);
    }

    if (curr.right !== null) {
      st.push(curr.right);
    }
  }
}

// Preorder: Root → Left → Right
function preOrder(root) {
  if (root === null) {
    return;
  }

  console.log(root.data);

  preOrder(root.left);
  preOrder(root.right);
}

// Postorder: Left → Right → Root
function postOrder(root) {
  if (root === null) {
    return;
  }

  postOrder(root.left);
  postOrder(root.right);

  console.log(root.data);
}

// Inorder: Left → Root → Right
function inOrder(root) {
  if (root === null) {
    return;
  }

  inOrder(root.left);

  console.log(root.data);

  inOrder(root.right);
}

// Main
const root = binaryTree();

preOrder(root);
