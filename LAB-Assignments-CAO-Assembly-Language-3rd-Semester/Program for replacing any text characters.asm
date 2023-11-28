; LAB Assingment # 8:

; Write a program for replacing any text characters

; SOURCE CODE:

section .text
global _start
_start:
mov [sec], byte 'y' ; Replaces the first character of "sec" with the letter "y"
mov [sec+5], byte 'w' ; Replaces the sixth character of "sec" with the letter "w"

mov eax, 4 ; Sets the value of the "eax" register to 4 (the system call number for "write")
mov ebx, 1 ; Sets the value of the "ebx" register to 1 (the file descriptor for standard output)
mov ecx, sec ; Sets the value of the "ecx" register to the address of "sec" (the string to write)
mov edx, 6 ; Sets the value of the "edx" register to the length of the string plus one
int 0x80
; exiting
mov eax, 1
int 0x80
section .data
sec db 'hello!' ; Creates a variable called "sec" that contains the string "hello!"

; OUTPUT: 
  ; yellow
 
   