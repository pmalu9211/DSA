// cout << "Hello";
let num = 0;
const isPrime = (n) => {
  for (let i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    } else {
      num++;
      // let str = n.toString(num);
    }
  }
  return true;
};
let check = 2;
let fuck = 1;
while (fuck < 150) {
  if (isPrime(check)) {
    const arr = check.toString().split("");
    let flag = true;
    // console.log(arr);
    for (let j = 0; j < arr.length; j++) {
      if (arr[j] != arr[arr.length - 1 - j]) {
        // return false
        flag = false;
      }
    }
    console;
    if (flag) {
      console.log(fuck, arr);
      fuck++;
    }

    // console.log("");
  }
  check++;
}
