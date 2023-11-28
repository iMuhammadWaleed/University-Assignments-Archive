; LAB Assingment # 2:

; Write a program to take first five numbers as input from user.

; SOURCE CODE:

section .text
global _start
_start:
;for printing 'Please enter a number: '
mov eax, 4
mov ebx, 1
mov ecx, userMessage
mov edx, length1
int 80h
;taking user input
mov eax, 3
mov ebx, 2
mov ecx, num
mov edx, 5
int 0x80
;for printing 'The entered number is: '
mov eax, 4
mov ebx, 1
mov ecx, displayMessage
mov edx, length2
int 0x80
;for printing input values
mov eax, 4
mov ebx, 1
mov ecx, num
mov edx, 5
int 0x80
mov eax, 1
mov ebx, 0
int 0x80
section .data
userMessage db 'Please enter a number: '
length1 equ $-userMessage
displayMessage db 'You have entered: '
length2 equ $-displayMessage

section .bss
num resb 5

; OUTPUT: 
  ; Please enter a number: 12345
  ; You have entered: 12345
   