console.log("=============================================");
console.log("Persamaan Linear Menggunakan Metode Doolittle");
console.log("=============================================");
console.log("");

console.log("a0 + 9a1 + 81a2");
console.log("a0 + 6a1 + 36a2");
console.log("a0 + 12a1 + 144a2");
console.log("");

const A = [
  [1, 9, 81],
  [1, 6, 36],
  [1, 12, 144]
];
console.log("A :");
console.log(A);

const b = [174, 236, 308]; //vektor konstanta pada sistem persamaan linear
console.log("b :");
console.log(b);
console.log("");

function Doolittle(A) {
  const n = A.length;
  const L = new Array(n).fill().map(() => new Array(n).fill(0));
  const U = new Array(n).fill().map(() => new Array(n).fill(0));
  for (let k = 0; k < n; k++) {
    L[k][k] = 1;
    for (let j = k; j < n; j++) {
      U[k][j] = A[k][j] - L[k].slice(0, k).reduce((acc, cur, s) => acc + cur * U[s][j], 0);
    }
    for (let i = k + 1; i < n; i++) {
      L[i][k] = (A[i][k] - L[i].slice(0, k).reduce((acc, cur, s) => acc + cur * U[s][k], 0)) / U[k][k];
    }
  }
  return [L, U];
}

function solve(A, b) {
  const n = A.length;
  const [L, U] = Doolittle(A);
  console.log("L :");
  console.log(L);
  console.log("U :");
  console.log(U);
  const y = new Array(n).fill(0);
  const x = new Array(n).fill(0);
  for (let i = 0; i < n; i++) {
    y[i] = b[i] - L[i].slice(0, i).reduce((acc, cur, j) => acc + cur * y[j], 0);
  }
  for (let i = n - 1; i >= 0; i--) {
    x[i] = (y[i] - U[i].slice(i + 1, n).reduce((acc, cur, j) => acc + cur * x[j + i + 1], 0)) / U[i][i];
  }
  console.log("");
  console.log("y :");
  console.log(y);
  console.log("");
  console.log("x :");
  console.log(x);
  console.log("");
  return x;
}

const a = solve(A, b);
console.log("Dalam rentang t = 6 hingga t = 12, nilai kecepatannya adalah :");
for (let t = 6; t <= 12; t++) {
  const v = a[0] + a[1] * t + a[2] * t * t;
  console.log(`t = ${t} v = ${v}`);
}
