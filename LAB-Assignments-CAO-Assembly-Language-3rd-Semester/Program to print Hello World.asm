; LAB Assingment # 1:

; Write a program to print “Hello World”

; SOURCE CODE:

section.text
global _start
_start:
mov edx, len ;message length
mov ecx, msg ;message to write
mov ebx, 1
mov eax, 4
int 0x80
mov eax, 1
int 0x80
section.data
msg db 'Hello, world!',0xa
len equ $ - msg

; OUTPUT: Hello, world!
   