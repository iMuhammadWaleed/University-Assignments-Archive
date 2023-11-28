; LAB Assingment # 18:

; Write a program to prepare a simple calculator

; SOURCE CODE:

section .data
msg1 db 'Enter first number:',0xA
len1 equ $ - msg1

msg2 db 'Enter second number:',0xA
len2 equ $ - msg2

msg3 db 'Enter operation to perform :',0xA
len3 equ $ - msg3

msg4 db '1 for Addition',0xA
len4 equ $ - msg4

msg5 db '2 for Subtraction',0xA
len5 equ $ - msg5

msg6 db '3 for Multiplication',0xA
len6 equ $ - msg6

msg7 db '4 for Division',0xA
len7 equ $ - msg7

msg8 db '5 for Exit',0xA

len8 equ $ - msg8

msg9 db 'Result:',0xA
len9 equ $ - msg9

section .bss
op resb 2
num1 resb 2
num2 resb 2
result resb 2

section .text

global _start

_start:

; Printing message 1
mov eax, 4
mov ebx, 1
mov ecx, msg1
mov edx, len1
int 80h

; Taking input of num1

mov eax, 3
mov ebx, 0
mov ecx, num1
mov edx, 2
int 80h

; Printing message 2
mov eax, 4
mov ebx, 1
mov ecx, msg2
mov edx, len2
int 80h

; Taking input of num2
mov eax, 3
mov ebx, 0
mov ecx, num2
mov edx, 2
int 80h

; Printing message 3
mov eax, 4
mov ebx, 1
mov ecx, msg3
mov edx, len3

int 80h

; Printing message 4
mov eax, 4
mov ebx, 1
mov ecx, msg4
mov edx, len4
int 80h

; Printing message 5
mov eax, 4
mov ebx, 1
mov ecx, msg5
mov edx, len5
int 80h

; Printing message 6
mov eax, 4
mov ebx, 1
mov ecx, msg6
mov edx, len6
int 80h

; Printing message 7
mov eax, 4

mov ebx, 1
mov ecx, msg7
mov edx, len7
int 80h

; Printing message 8
mov eax, 4
mov ebx, 1
mov ecx, msg8
mov edx, len8
int 80h

; Taking input for operation to perform
mov ebx,0
mov ecx,op
mov edx,2
mov eax,3
int 80h

mov ah, [op] ; Move the selected option to the registry ah
sub ah, '0' ; Convert from ascii to decimal

; Conparing operation to perform a/c to user input

cmp ah, 1

je addition
cmp ah, 2
je subtraction
cmp ah, 3
je multiplication
cmp ah, 4
je division
cmp ah, 5
je exit

addition:
; Storing numbers in the registers eax and ebx
mov eax, [num1]
mov ebx, [num2]

; Convert from ascii to decimal
sub eax, '0'
sub ebx, '0'

; Add
add eax, ebx

; Conversion from decimal to ascii
add eax, '0'

;moving result
mov [result], eax

; Printing message 9
mov eax, 4
mov ebx, 1
mov ecx, msg9
mov edx, len9
int 80h

; Printing result
mov eax, 4
mov ebx, 1
mov ecx, result
mov edx, 2
int 80h

; jumping to exit the program
jmp exit

subtraction:
; Movinge numbers in the registers eax and ebx
mov eax, [num1]
mov ebx, [num2]

; Convert from ascii to decimal
sub eax, '0'
sub ebx, '0'

; Subtract
sub eax, ebx

; Conversion from decimal to ascii
add eax, '0'

; moving result
mov [result], eax

; Printing message 9
mov eax, 4
mov ebx, 1
mov ecx, msg9
mov edx, len9
int 80h

; Printing result
mov eax, 4
mov ebx, 1
mov ecx, result
mov edx, 1

int 80h

; jumping to exit the program
jmp exit

multiplication:

; Storing numbers in registers al and bl
mov al, [num1]
mov bl, [num2]

; Convert from ascii to decimal
sub al, '0'
sub bl, '0'

; Multiply. AX = AL x BL
mul bl

; Conversion from decimal to ascii
add ax, '0'

; moving result
mov [result], ax

; Printing message 9

mov eax, 4
mov ebx, 1
mov ecx, msg9
mov edx, len9
int 80h

; Printing result
mov eax, 4
mov ebx, 1
mov ecx, result
mov edx, 1
int 80h

; jumping to exit the program
jmp exit

division:

; Storing the numbers in registers ax and bx
mov al, [num1]
mov bl, [num2]

; Initialized the DX register to 0, AH register to 0
mov dx, 0
mov ah, 0

; Convert from ascii to decimall
sub al, '0'
sub bl, '0'

; Division. AL = AX / BX
div bl

; Conversion from decimal to ascii
add ax, '0'
; We move the result
mov [result], ax

; Printing message 9
mov eax, 4
mov ebx, 1
mov ecx, msg9
mov edx, len9
int 80h

; Printing result
mov eax, 4
mov ebx, 1
mov ecx, result
mov edx, 1

int 80h

; jumping to exit the program
jmp exit

exit:
; End the program
mov eax, 1
mov ebx, 0
int 80h


; OUTPUTS: 
;If Performing Addition (+):

;Enter first number:
;2
;Enter second number:
;3

;Enter operation to perform :
;1 for Addition
;2 for Subtraction
;3 for Multiplication
;4 for Division
;5 for Exit

;1

;Result:
;5

;If Performing Subtraction (-):

;Enter first number:
;3
;Enter second number:
;2

;Enter operation to perform :
;1 for Addition
;2 for Subtraction
;3 for Multiplication
;4 for Division
;5 for Exit

;2
;Result:
;1

;If Performing Multiplication (*):

;Enter first number:
;2
;Enter second number:
;3

;Enter operation to perform :
;1 for Addition
;2 for Subtraction
;3 for Multiplication
;4 for Division
;5 for Exit

;3

;Result:
;6

;If Performing Division (/):

;Enter first number:
;2
;Enter second number:
;2

;Enter operation to perform :
;1 for Addition
;2 for Subtraction
;3 for Multiplication
;4 for Division
;5 for Exit

;4

;Result:
;1

;If Performing to Exit:

;Enter first number:
;2
;Enter second number:
;3

;Enter operation to perform :
;1 for Addition
;2 for Subtraction
;3 for Multiplication
;4 for Division
;5 for Exit

;5
;
   