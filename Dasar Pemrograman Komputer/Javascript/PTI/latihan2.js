let a = parseInt(prompt("Silakan pilih menu: \n1. Bakso \n2. Mie Kuah \n3. Nasi Goreng \n4. Sate \n5. Rendang"));


switch(a){
    case 1:
        alert("ANDA MEMESAN BAKSO");
        break;
    case 2:
        alert("ANDA MEMESAN MIE KUAH");
        break;
    case 3:
        alert("ANDA MEMESAN NASI GORENG");
        break;
    case 4:
        alert("ANDA MEMESAN SATE");
        break;
    case 5:
        alert("ANDA MEMESAN RENDANG");
        break;
    default:
        alert("YANG ANDA MASUKKAN SALAH");
        break;
}
let cont = document.querySelector(".sappe")

cont.innerHTML = `
switch(a){
    case 1:
        alert("ANDA MEMESAN BAKSO");
        break;
    case 2:
        alert("ANDA MEMESAN MIE KUAH");
        break;
    case 3:
        alert("ANDA MEMESAN NASI GORENG");
        break;
    case 4:
        alert("ANDA MEMESAN SATE");
        break;
    case 5:
        alert("ANDA MEMESAN RENDANG");
        break;
    default:
        alert("YANG ANDA MASUKKAN SALAH");
        break;
}`