let a, b

a = parseInt(prompt("masukkan nilai a"))
b = parseInt(prompt("Masukkan nilai b"))


let cont = document.querySelector(".sappe")

cont.innerHTML = `
<br>
<br>
<br>
nilai a : ${a} <br>
nilai b : ${b} <br><br>
${a} + ${b} = ${a+b} <br>
${a} - ${b} = ${a-b} <br>
${a} x ${b} = ${a*b} <br>
${a} / ${b} = ${a/b} <br>`

