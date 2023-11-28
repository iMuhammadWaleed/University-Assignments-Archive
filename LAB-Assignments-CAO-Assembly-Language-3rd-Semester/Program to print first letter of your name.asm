; LAB Assingment # 5:

; Write a program to print first letter of your name.

; SOURCE CODE:

section	.text
	global _start       
_start:                     
mov edx, 1
mov ecx, name
mov ebx, 1
mov eax, 4
int 0x80
mov eax, 1
int 0x80
section	.data
name db 'Waleed',0xa

; OUTPUT: 
  ; W
 
   