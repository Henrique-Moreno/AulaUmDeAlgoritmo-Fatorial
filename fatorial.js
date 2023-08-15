function calcularFatorial(n) {
    if (n === 0 || n === 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

const numero = 1;
const fatorial = calcularFatorial(numero);
console.log(`O fatorial de ${numero} é: ${fatorial}`);