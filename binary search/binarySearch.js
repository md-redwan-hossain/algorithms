const binarySearch = (targetValue, arr) => {
  let lowerBound = 0;
  let upperBound = arr.length - 1;

  while (lowerBound <= upperBound) {
    const mid = Math.floor(lowerBound + (upperBound - lowerBound) / 2);

    if (targetValue === arr[mid]) {
      return `${targetValue} found at position ${mid + 1}`;
    }

    if (arr[mid] > targetValue) upperBound = mid - 1;
    else if (arr[mid] < targetValue) lowerBound = mid + 1;
  }
  return `${targetValue} not found`;
};
