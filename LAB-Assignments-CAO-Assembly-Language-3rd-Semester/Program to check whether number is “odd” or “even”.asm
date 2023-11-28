; LAB Assingment # 7:

; Write a program to check whether number is “odd” or “even”

; SOURCE CODE:

section .text
global _start
_start:
mov eax, '8' ;getting 8 in the eax
and eax, 1 ;and eax with 1
jz even ; where jz = jump if zero
mov eax, 4
mov ebx, 1
mov ecx, odd_msg
mov edx, len2
int 0x80
jmp outprog ; where jmp = jump
even:
mov eax, 4
mov ebx, 1
mov ecx, even_msg
mov edx, len1
int 0x80
outprog:
mov eax,1
int 0x80

section .data
even_msg db 'Even Number!'
len1 equ $ - even_msg
odd_msg db 'Odd Number!'
len2 equ $ - odd_msg

; OUTPUT: 
  ; Even Number!
 
   