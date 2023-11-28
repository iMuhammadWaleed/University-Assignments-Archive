; LAB Assingment # 12:

; Write a program to print numbers from 1 to 9

; SOURCE CODE:

section .text
global _start ;must be declared for using gcc
_start:
mov ecx,9
mov eax, '1'
l1:
mov [num], eax
mov eax, 4
mov ebx, 1
push ecx
mov ecx, num
mov edx, 1
int 0x80
mov eax, [num]
sub eax, '0'
inc eax
add eax, '0'
pop ecx
loop l1
mov eax,1
int 0x80
section .bss
num resb 1

; OUTPUT: 
;123456789
   