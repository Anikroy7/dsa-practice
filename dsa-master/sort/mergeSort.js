const merge = (arr, l, mid, h) => {
  let left = l;
  let right = mid + 1;
  const newArr = [];
  while (left <= mid && right <= h) {
    if (arr[left] < arr[right]) {
      newArr.push(arr[left]);
      left++;
    } else {
      newArr.push(arr[right]);
      right++;
    }
  }

  while (left <= mid) {
    newArr.push(arr[left]);
    left++;
  }
  while (right <= h) {
    newArr.push(arr[right]);
    right++;
  }

  for (let i = 0; i <= newArr.length-1; i++) {
    arr[i+l] = newArr[i];
  }
};

const mergeSort = (arr, l, h) => {
  if (l == h) return;
  let mid = Math.floor((l + h) / 2);

  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, h);

  merge(arr, l,mid, h);
};

const solve = () => {
  const arr = [8, 3, 7, 4, 9, 2, 6, 1,0];
  mergeSort(arr, 0, arr.length - 1);
  //   merge(arr, 0, arr.length - 1);

  for (let i = 0; i <= arr.length - 1; i++) {
    console.log(arr[i]);
  }
};

solve();
