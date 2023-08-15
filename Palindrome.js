function isPalindrome(str) {
    const cleanStr = str.replace(/\s/g, '').toLowerCase();

    return cleanStr === cleanStr.split('').reverse().join('');
}

console.log(isPalindrome('Ame a lma'))
