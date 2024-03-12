// console.log("Hello1");
// function pop() {
//   console.log("Hello3");
// }
// function pp(pop) {
//   console.log(":Hello2");
//    function pp1(pp2)
//       {
//             console.log("cha")
//       }
// }
// pp(pop);
// console.log("Hello4");

//This is a promise chaining bhai
//It is used to reduce call back hell.
// const pp = new Promise((res, rej) => {
//   console.log("paras bhai Ky haal hai");
//   let a = 10;
//   console.log(a);
//   if (a == 10) {
//     setTimeout(() => {
//       console.log("Promise resolved 1");
//     }, 2000);
//   } else {
//     console.log("Not res");
//   }
//   console.log("promise 1 end");
// });
// const pp1 = new Promise((res, rej) => {
//   console.log("paras bhai Ky haal hai 2");
//   let a = 10;
//   console.log(a);
//   if (a == 10) {
//     setTimeout(() => {
//       console.log("Promise resolved 2");
//     }, 5000);
//   } else {
//     console.log("Not res");
//   }
//   console.log("Promise 2 end");
// });

// let pop = pp;
// pop
//   .then((ele) => {
//     return `paras bc ${ele}`;
//   })
//   .then((ele) => {
//     console.log(ele);
//   })
//   .catch((error) => {
//     console.log(error);
//   })
//   .finally(() => {
//     console.log("Finally executed");
//     //Finally will be executed either the the promise is res or rej \
//     //It is used in memorry cleaning task

//   });
// let pop = pp;
// async function paras() {
//   let ans = await pop();
//   console.log("First Block");
//   let ans1 = await pop();
//   console.log("Second block");
//   console.log(ans);
//   console.log(ans1);
// }
// console.log("jicdhjeichiwec");

//If js engine encounters the await it suspends the that call and executes the rest of lines which are not
//Synchonus if first promise takes less time then and second have greater time then 1st executes firts anf second at last
// but if 1st takes a more time then second then second has to wait for first to finish
//js remembers the previous state where he left the execution

function paras() {
  console.log("Paras is called");
}
console.log(paras);
