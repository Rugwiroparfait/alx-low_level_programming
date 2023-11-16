section .data
    hello db 'Hello, Holberton', 0

section .text
    global _start

_start:
    ; Call printf
    mov rdi, hello
    mov rax, 0          ; 0 is the syscall number for sys_write
    call printf

    ; Exit the program
    mov rax, 60         ; 60 is the syscall number for sys_exit
    xor rdi, rdi        ; Exit code 0
    syscall

section .text
global printf
extern printf

printf:
    mov eax, 0          ; syscall: sys_write
    mov edi, 1          ; file descriptor: stdout
    mov edx, 17         ; length of the message
    mov esi, hello      ; pointer to the message
    syscall
    ret

