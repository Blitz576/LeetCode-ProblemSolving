function createCounter(init) {
  let currentCount = init;

  return {
    increment() {
      currentCount++;
      return currentCount;
    },
    decrement() {
      currentCount--;
      return currentCount;
    },
    reset() {
      currentCount = init;
      return currentCount;
    },
  };
}
