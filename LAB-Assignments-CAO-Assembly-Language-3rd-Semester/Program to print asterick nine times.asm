; LAB Assingment # 10:

; Write a program to print * nine times

; SOURCE CODE:

section .text
global _start
_start:
mov edx,len
mov ecx,msg
mov ebx,1
mov eax,4
int 0x80
mov edx,9
mov ecx,msg2
mov ebx,1
mov eax,4
int 0x80
mov eax,1
int 0x80

section .data
msg db 'Displaying 9 stars',0xa ;a message
len equ $ - msg ;length of message
msg2 times 9 db '*'

; OUTPUT: 
;Displaying 9 stars
;*********
 
   