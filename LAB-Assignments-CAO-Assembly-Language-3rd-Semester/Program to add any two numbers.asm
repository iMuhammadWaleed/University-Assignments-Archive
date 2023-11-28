; LAB Assingment # 3:

; Write a program to add any two numbers.

; SOURCE CODE:

section	.text
	global _start       
_start:                     
; moving the first number to eax register and second number to ebx
; and subtracting ascii '0' to convert it into a decimal number
mov eax,'4'
sub eax, '0'
mov ebx, '2'
sub ebx, '0'
add eax, ebx
add eax, '0'
; storing the sum in memory location sum
mov [sum], eax
;for printing '"The sum is: '
mov ecx,msg
mov edx, len
mov ebx,1
mov eax,4
int 0x80
; printing the value of sum
mov ecx,sum
mov edx, 1
mov ebx,1
mov eax,4
int 0x80
mov eax,1
int 0x80
section .data
msg db "The sum is:", 0xA
len equ $ - msg
section .bss
sum resb 1

; OUTPUT: 
  ; The sum is: 
  ; 6

   