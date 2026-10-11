const array = ["q"];

const map = {};
let groupCount = 0;

const result = [];
for (let it of array) {
  const st = it.split("").sort().join("");

  if (map[st] !== undefined) {
    const group = map[st];
    console.log(group);
    result[group].push(it);
  } else {
    const arr = [];
    map[st] = groupCount;
    arr.push(it);
    result[groupCount] = arr;
    groupCount++;
  }
}

for (let it of result) {
  for (let val of it) {
    console.log(val);
  }
  console.log('\n');
}
