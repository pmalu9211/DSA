const fucnttt = (num) => {
  for (let i = 1; i <= 10; i++) {
    if (num % i !== 0) {
      return false;
    }
  }
  return true;
};

let fumb = 10000;
let hello = 0;
while (hello < 1000) {
  if (fucnttt(fumb)) {
    console.log(fumb);
    break;
  } else {
    fumb++;
  }
}
