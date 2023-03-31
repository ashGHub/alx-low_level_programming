section .data
    message db 'Hello, Holberton', 0Ah, 0

section .text
    global main
    extern printf

main:
    mov edi, message
    xor eax, eax
    call printf
    xor eax, eax
    ret
