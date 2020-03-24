.intel_syntax noprefix
.text
.globl binary_array_to_int

/*; Returns an integer represented by the passed-in array of integers 0 or 1
; arg0         = (int32_t*) The array
; arg1         = (size_t)   The length of the array (guaranteed range of 1 inclusive to 32 inclusive)
; return value = (int32_t)  The integer represented by the array
*/

binary_array_to_int:
  push rbp
  mov rbp, rsp
  sub rsp, 64
  
  mov rcx, rsi
  mov rbx, rdi
  xor rax, rax
startLoop:
  shl rax, 1
  cmp BYTE PTR [rbx], 0
  je skipAddBit
  or rax, 1
skipAddBit:
  add rbx, 4
  dec rcx
  cmp rcx, 0
  jne startLoop
  
  add rsp, 64
  pop rbp
  ret
