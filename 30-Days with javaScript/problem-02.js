/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function (n) {
  var currentCount = n;

  return function () {
    return currentCount++;
  };
};
