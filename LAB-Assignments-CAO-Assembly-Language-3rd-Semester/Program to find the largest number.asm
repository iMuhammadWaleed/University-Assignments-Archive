; LAB Assingment # 9:

; Write a program to find the largest number

; SOURCE CODE:

section .text
global _start
_start:
mov ecx, [num1]
cmp ecx, [num2]
jg check_third_num
mov ecx, [num2]
check_third_num:
cmp ecx, [num3]
jg _exit
mov ecx, [num3]
_exit:
mov [largest], ecx
mov ecx,msg
mov edx, len
mov ebx,1
mov eax,4
int 0x80
mov ecx,largest
mov edx, 2
mov ebx,1
mov eax,4
int 0x80

mov eax, 1
int 0x80
section .data
msg db "The largest digit is: ", 0xA
len equ $- msg
num1 db '47'
num2 db '22'
num3 db '31'
section .bss
largest resb 2

; OUTPUT: 
; The largest digit is: 
;47
 
   