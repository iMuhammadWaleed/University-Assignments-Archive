; LAB Assingment # 11:

; Write a program to find smallest number

; SOURCE CODE:

section .text
global _start
_start:
mov ecx, [num1]
cmp ecx, [num2]
jl check_third_num
mov ecx, [num2]
check_third_num:
cmp ecx, [num3]
jmp _exit
mov ecx, [num3]
_exit:
mov [smallest], ecx
mov ecx,msg
mov edx, len
mov ebx,1
mov eax,4
int 0x80
mov ecx,smallest
mov edx, 2
mov ebx,1
mov eax,4
int 0x80

mov eax, 1
int 0x80
section .data
msg db "The smallest digit is: ", 0xA
len equ $- msg
num1 db '47'; first number
num2 db '22'; second number
num3 db '31'; third number
section .bss
smallest resb 2

; OUTPUT: 
;The smallest digit is: 
;22
 
   