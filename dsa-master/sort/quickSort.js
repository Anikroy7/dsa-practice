/*

{4, 6, 7, 2, 1, 3};
*/

function quickSort(vct, l, h) {
  let low = l;
  let pivot = vct[low];
  let high = h;
  while (low <= high) {
    if (vct[low] <= pivot) {
      low++;
      continue;
    } else if (vct[high] > pivot) {
      high--;
      continue;
    }
    let temp = vct[low];
    vct[low] = vct[high];
    vct[high] = temp;
  }

  let temp = vct[l];
  vct[l] = vct[high];
  vct[high] = temp;
  return high;
}

const quickSortAlgo = (arr, low, high) => {
  if (low <= high){
      let pivot = quickSort(arr, low, high);
      quickSortAlgo(arr, low, pivot - 1);
      quickSortAlgo(arr, pivot + 1, high);
  };
};

const vct = [9,8,7,6,1,4];
quickSortAlgo(vct, 0, vct.length - 1);
for (let i = 0; i < vct.length; i++) {
  console.log(vct[i]);
}
// console.log(quickSort(vct, 0, vct.length - 1));
