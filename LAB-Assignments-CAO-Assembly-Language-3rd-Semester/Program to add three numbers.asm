; LAB Assingment # 6:

; Write a program to add three numbers.

; SOURCE CODE:

section .text
global _start
_start:
mov eax, '2' ; moving “2” to eax register
add eax, '1' ; adding “1” to eax register
sub eax, '0' ; subtracting ascii '0' to convert it into a decimal number
mov ebx, '5' ; moving “5” to ebx register
sub ebx, '0' ; subtracting ascii '0' to convert it into a decimal number
add eax, ebx ;adding both
mov [sum], eax ; storing the ans in memory location “sum”
; typing “Sum is: “
mov ecx, msg ; message to write
mov edx, len ; message length
mov ebx, 1 ; file descriptor (stdout)
mov eax, 4 ; system call number (sys_write)
int 0x80 ; call kernel
; printing the value of sum
mov ecx, sum
mov edx, 1
mov ebx, 1
mov eax, 4
int 0x80

; exiting
mov eax, 1 ; system call number (sys_exit)
int 0x80 ; call kernel

section .data
msg db "Sum is: "
len equ $ - msg
section .bss
sum resb 1

; OUTPUT: 
  ; Sum is: 8
 
   