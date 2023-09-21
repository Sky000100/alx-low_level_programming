section .data
    hello db "Hello, Holberton",0  ; Null-terminated string
    format db "%s", 10, 0         ; Format string for printf

section .text
    global main
    extern printf

main:
    push rbp                 ; Save the base pointer
    mov rdi, format          ; Load format string address
    mov rsi, hello           ; Load string address
    xor rax, rax             ; Clear RAX register (no vector registers used)
    call printf             ; Call the printf function
    pop rbp                  ; Restore the base pointer
    ret                      ; Return

section .data
    section .bss

