; LAB Assingment # 17:

; Write a program to add two numbers using procedure

; SOURCE CODE:

section .text
global _start
_start:
mov ecx,'4'
sub ecx, '0'

mov edx, '5'
sub edx, '0'

call sum
mov [res], eax
mov ecx, msg
mov edx, len
mov ebx,1
mov eax,4
int 0x80

mov ecx, res
mov edx, 1
mov ebx, 1
mov eax, 4
int 0x80

mov eax,1
int 0x80
sum:
mov eax, ecx
add eax, edx
add eax, '0'
ret

section .data
msg db "The sum is:", 0xA
len equ $- msg

section .bss
res resb 1

; OUTPUT: 
;The sum is:
;9
   