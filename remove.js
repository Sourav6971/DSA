var removeElement = function (nums, val) {
  const newArray = nums.filter((index) => {
    return index != val;
  });
  return newArray;
};

console.log(removeElement([0, 1, 2, 2, 3, 0, 4, 2], 2));
