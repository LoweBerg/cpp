	.file	"bitryssland.cpp"
	.text
	.section	.text$_ZnwyPv,"x"
	.linkonce discard
	.globl	_ZnwyPv
	.def	_ZnwyPv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZnwyPv
_ZnwyPv:
.LFB96:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt17__size_to_integery,"x"
	.linkonce discard
	.globl	_ZSt17__size_to_integery
	.def	_ZSt17__size_to_integery;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt17__size_to_integery
_ZSt17__size_to_integery:
.LFB733:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
.lcomm _ZStL8__ioinit,1,1
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC1:
	.ascii "nej\0"
.LC2:
	.ascii "ja\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2791:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$224, %rsp
	.seh_stackalloc	224
	leaq	208(%rsp), %rbp
	.seh_setframe	%rbp, 208
	movups	%xmm6, 0(%rbp)
	.seh_savexmm	%xmm6, 208
	.seh_endprologue
	call	__main
	leaq	-64(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
.LEHB0:
	call	_ZNSirsERi
	leaq	-68(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
.LEHE0:
	leaq	-58(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIxEC1Ev
	movl	-64(%rbp), %eax
	movslq	%eax, %rdx
	leaq	-58(%rbp), %rcx
	leaq	-96(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
.LEHB1:
	call	_ZNSt6vectorIxSaIxEEC1EyRKS0_
.LEHE1:
	leaq	-58(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIxED1Ev
	leaq	-96(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIxSaIxEE5beginEv
	movq	%rax, -136(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIxSaIxEE3endEv
	movq	%rax, -144(%rbp)
	jmp	.L6
.L7:
	leaq	-136(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEdeEv
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
.LEHB2:
	call	_ZNSirsERx
.LEHE2:
	leaq	-136(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEppEv
.L6:
	leaq	-144(%rbp), %rdx
	leaq	-136(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxxneIPxSt6vectorIxSaIxEEEEbRKNS_17__normal_iteratorIT_T0_EESA_
	testb	%al, %al
	jne	.L7
	leaq	-57(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIxEC1Ev
	movl	-68(%rbp), %eax
	movslq	%eax, %rdx
	leaq	-57(%rbp), %rcx
	leaq	-128(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
.LEHB3:
	call	_ZNSt6vectorIxSaIxEEC1EyRKS0_
.LEHE3:
	leaq	-57(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIxED1Ev
	leaq	-128(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIxSaIxEE5beginEv
	movq	%rax, -152(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIxSaIxEE3endEv
	movq	%rax, -160(%rbp)
	jmp	.L8
.L9:
	leaq	-152(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEdeEv
	movq	%rax, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
.LEHB4:
	call	_ZNSirsERx
	leaq	-152(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEppEv
.L8:
	leaq	-160(%rbp), %rdx
	leaq	-152(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxxneIPxSt6vectorIxSaIxEEEEbRKNS_17__normal_iteratorIT_T0_EESA_
	testb	%al, %al
	jne	.L9
	leaq	-128(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIxSaIxEE5beginEv
	movq	%rax, -168(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIxSaIxEE3endEv
	movq	%rax, -176(%rbp)
	jmp	.L10
.L20:
	leaq	-168(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEdeEv
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt6vectorIxSaIxEE4sizeEv
	subl	$1, %eax
	movl	%eax, -12(%rbp)
	jmp	.L11
.L16:
	movl	-12(%rbp), %eax
	movl	%eax, %edx
	movl	$2, %ecx
	call	_ZSt3powIiiEN9__gnu_cxx11__promote_2IDTplcvNS1_IT_XsrSt12__is_integerIS2_E7__valueEE6__typeELi0EcvNS1_IT0_XsrS3_IS7_E7__valueEE6__typeELi0EEXsrS3_ISB_E7__valueEE6__typeES2_S7_
	pxor	%xmm1, %xmm1
	cvtsi2sdq	-8(%rbp), %xmm1
	subsd	%xmm0, %xmm1
	cvttsd2siq	%xmm1, %rax
	movq	%rax, -8(%rbp)
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIxSaIxEEixEy
	movq	(%rax), %rdx
	subq	$1, %rdx
	movq	%rdx, (%rax)
.L12:
	pxor	%xmm6, %xmm6
	cvtsi2sdq	-8(%rbp), %xmm6
	movl	-12(%rbp), %eax
	movl	%eax, %edx
	movl	$2, %ecx
	call	_ZSt3powIiiEN9__gnu_cxx11__promote_2IDTplcvNS1_IT_XsrSt12__is_integerIS2_E7__valueEE6__typeELi0EcvNS1_IT0_XsrS3_IS7_E7__valueEE6__typeELi0EEXsrS3_ISB_E7__valueEE6__typeES2_S7_
	movapd	%xmm0, %xmm1
	subsd	%xmm1, %xmm6
	movapd	%xmm6, %xmm0
	pxor	%xmm1, %xmm1
	comisd	%xmm1, %xmm0
	jb	.L13
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIxSaIxEEixEy
	movq	(%rax), %rax
	testq	%rax, %rax
	jle	.L13
	movl	$1, %eax
	jmp	.L15
.L13:
	movl	$0, %eax
.L15:
	testb	%al, %al
	jne	.L16
	subl	$1, -12(%rbp)
.L11:
	cmpl	$0, -12(%rbp)
	jns	.L12
	cmpq	$0, -8(%rbp)
	jle	.L18
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$0, %ebx
	movl	$0, %esi
	jmp	.L19
.L18:
	leaq	-168(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEppEv
.L10:
	leaq	-176(%rbp), %rdx
	leaq	-168(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxxneIPxSt6vectorIxSaIxEEEEbRKNS_17__normal_iteratorIT_T0_EESA_
	testb	%al, %al
	jne	.L20
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.LEHE4:
	movl	$1, %esi
.L19:
	leaq	-128(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIxSaIxEED1Ev
	cmpl	$1, %esi
	jne	.L21
	movl	$1, %esi
	jmp	.L22
.L21:
	movl	$0, %esi
.L22:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIxSaIxEED1Ev
	cmpl	$1, %esi
	jne	.L24
	movl	$0, %ebx
.L24:
	movl	%ebx, %eax
	jmp	.L34
.L29:
	movq	%rax, %rbx
	leaq	-58(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIxED1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB5:
	call	_Unwind_Resume
.L31:
	movq	%rax, %rbx
	leaq	-57(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIxED1Ev
	jmp	.L27
.L32:
	movq	%rax, %rbx
	leaq	-128(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIxSaIxEED1Ev
	jmp	.L27
.L30:
	movq	%rax, %rbx
.L27:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIxSaIxEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
	call	_Unwind_Resume
.LEHE5:
.L34:
	movups	0(%rbp), %xmm6
	addq	$224, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rbp
	ret
	.def	__gxx_personality_seh0;	.scl	2;	.type	32;	.endef
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2791:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2791-.LLSDACSB2791
.LLSDACSB2791:
	.uleb128 .LEHB0-.LFB2791
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB2791
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L29-.LFB2791
	.uleb128 0
	.uleb128 .LEHB2-.LFB2791
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L30-.LFB2791
	.uleb128 0
	.uleb128 .LEHB3-.LFB2791
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L31-.LFB2791
	.uleb128 0
	.uleb128 .LEHB4-.LFB2791
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L32-.LFB2791
	.uleb128 0
	.uleb128 .LEHB5-.LFB2791
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE2791:
	.text
	.seh_endproc
	.section	.text$_ZNSaIxEC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaIxEC1Ev
	.def	_ZNSaIxEC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaIxEC1Ev
_ZNSaIxEC1Ev:
.LFB3108:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIxEC2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaIxED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaIxED2Ev
	.def	_ZNSaIxED2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaIxED2Ev
_ZNSaIxED2Ev:
.LFB3110:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIxED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaIxED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaIxED1Ev
	.def	_ZNSaIxED1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaIxED1Ev
_ZNSaIxED1Ev:
.LFB3111:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIxED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIxSaIxEEC1EyRKS0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIxSaIxEEC1EyRKS0_
	.def	_ZNSt6vectorIxSaIxEEC1EyRKS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIxSaIxEEC1EyRKS0_
_ZNSt6vectorIxSaIxEEC1EyRKS0_:
.LFB3114:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	32(%rsp), %rbp
	.seh_setframe	%rbp, 32
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	32(%rbp), %rbx
	movq	48(%rbp), %rdx
	movq	40(%rbp), %rax
	movq	%rax, %rcx
.LEHB6:
	call	_ZNSt6vectorIxSaIxEE17_S_check_init_lenEyRKS0_
	movq	48(%rbp), %rdx
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	%rbx, %rcx
	call	_ZNSt12_Vector_baseIxSaIxEEC2EyRKS0_
.LEHE6:
	movq	40(%rbp), %rdx
	movq	32(%rbp), %rax
	movq	%rax, %rcx
.LEHB7:
	call	_ZNSt6vectorIxSaIxEE21_M_default_initializeEy
.LEHE7:
	jmp	.L41
.L40:
	movq	%rax, %rbx
	movq	32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIxSaIxEED2Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB8:
	call	_Unwind_Resume
	nop
.LEHE8:
.L41:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA3114:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3114-.LLSDACSB3114
.LLSDACSB3114:
	.uleb128 .LEHB6-.LFB3114
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB7-.LFB3114
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L40-.LFB3114
	.uleb128 0
	.uleb128 .LEHB8-.LFB3114
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
.LLSDACSE3114:
	.section	.text$_ZNSt6vectorIxSaIxEEC1EyRKS0_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt6vectorIxSaIxEED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIxSaIxEED1Ev
	.def	_ZNSt6vectorIxSaIxEED1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIxSaIxEED1Ev; morbius
_ZNSt6vectorIxSaIxEED1Ev:
.LFB3117:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv
	movq	%rax, %rcx
	movq	16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZSt8_DestroyIPxxEvT_S1_RSaIT0_E
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIxSaIxEED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA3117:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3117-.LLSDACSB3117
.LLSDACSB3117:
.LLSDACSE3117:
	.section	.text$_ZNSt6vectorIxSaIxEED1Ev,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt6vectorIxSaIxEE5beginEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIxSaIxEE5beginEv
	.def	_ZNSt6vectorIxSaIxEE5beginEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIxSaIxEE5beginEv
_ZNSt6vectorIxSaIxEE5beginEv:
.LFB3118:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rdx
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEC1ERKS1_
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIxSaIxEE3endEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIxSaIxEE3endEv
	.def	_ZNSt6vectorIxSaIxEE3endEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIxSaIxEE3endEv
_ZNSt6vectorIxSaIxEE3endEv:
.LFB3119:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	leaq	8(%rax), %rdx
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEC1ERKS1_
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxxneIPxSt6vectorIxSaIxEEEEbRKNS_17__normal_iteratorIT_T0_EESA_,"x"
	.linkonce discard
	.globl	_ZN9__gnu_cxxneIPxSt6vectorIxSaIxEEEEbRKNS_17__normal_iteratorIT_T0_EESA_
	.def	_ZN9__gnu_cxxneIPxSt6vectorIxSaIxEEEEbRKNS_17__normal_iteratorIT_T0_EESA_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxxneIPxSt6vectorIxSaIxEEEEbRKNS_17__normal_iteratorIT_T0_EESA_
_ZN9__gnu_cxxneIPxSt6vectorIxSaIxEEEEbRKNS_17__normal_iteratorIT_T0_EESA_:
.LFB3120:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	32(%rsp), %rbp
	.seh_setframe	%rbp, 32
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEE4baseEv
	movq	(%rax), %rbx
	movq	40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEE4baseEv
	movq	(%rax), %rax
	cmpq	%rax, %rbx
	setne	%al
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEppEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEppEv
	.def	_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEppEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEppEv
_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEppEv:
.LFB3121:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	leaq	8(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEdeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEdeEv
	.def	_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEdeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEdeEv
_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEdeEv:
.LFB3122:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt6vectorIxSaIxEE4sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt6vectorIxSaIxEE4sizeEv
	.def	_ZNKSt6vectorIxSaIxEE4sizeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt6vectorIxSaIxEE4sizeEv
_ZNKSt6vectorIxSaIxEE4sizeEv:
.LFB3124:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$3, %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt3powIiiEN9__gnu_cxx11__promote_2IDTplcvNS1_IT_XsrSt12__is_integerIS2_E7__valueEE6__typeELi0EcvNS1_IT0_XsrS3_IS7_E7__valueEE6__typeELi0EEXsrS3_ISB_E7__valueEE6__typeES2_S7_,"x"
	.linkonce discard
	.globl	_ZSt3powIiiEN9__gnu_cxx11__promote_2IDTplcvNS1_IT_XsrSt12__is_integerIS2_E7__valueEE6__typeELi0EcvNS1_IT0_XsrS3_IS7_E7__valueEE6__typeELi0EEXsrS3_ISB_E7__valueEE6__typeES2_S7_
	.def	_ZSt3powIiiEN9__gnu_cxx11__promote_2IDTplcvNS1_IT_XsrSt12__is_integerIS2_E7__valueEE6__typeELi0EcvNS1_IT0_XsrS3_IS7_E7__valueEE6__typeELi0EEXsrS3_ISB_E7__valueEE6__typeES2_S7_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt3powIiiEN9__gnu_cxx11__promote_2IDTplcvNS1_IT_XsrSt12__is_integerIS2_E7__valueEE6__typeELi0EcvNS1_IT0_XsrS3_IS7_E7__valueEE6__typeELi0EEXsrS3_ISB_E7__valueEE6__typeES2_S7_
_ZSt3powIiiEN9__gnu_cxx11__promote_2IDTplcvNS1_IT_XsrSt12__is_integerIS2_E7__valueEE6__typeELi0EcvNS1_IT0_XsrS3_IS7_E7__valueEE6__typeELi0EEXsrS3_ISB_E7__valueEE6__typeES2_S7_:
.LFB3125:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	pxor	%xmm0, %xmm0
	cvtsi2sdl	24(%rbp), %xmm0
	pxor	%xmm2, %xmm2
	cvtsi2sdl	16(%rbp), %xmm2
	movq	%xmm2, %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	call	pow
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIxSaIxEEixEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIxSaIxEEixEy
	.def	_ZNSt6vectorIxSaIxEEixEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIxSaIxEEixEy
_ZNSt6vectorIxSaIxEEixEy:
.LFB3126:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	24(%rbp), %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt15__new_allocatorIxEC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt15__new_allocatorIxEC2Ev
	.def	_ZNSt15__new_allocatorIxEC2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt15__new_allocatorIxEC2Ev
_ZNSt15__new_allocatorIxEC2Ev:
.LFB3283:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt15__new_allocatorIxED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt15__new_allocatorIxED2Ev
	.def	_ZNSt15__new_allocatorIxED2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt15__new_allocatorIxED2Ev
_ZNSt15__new_allocatorIxED2Ev:
.LFB3286:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC3:
	.ascii "cannot create std::vector larger than max_size()\0"
	.section	.text$_ZNSt6vectorIxSaIxEE17_S_check_init_lenEyRKS0_,"x"
	.linkonce discard
	.globl	_ZNSt6vectorIxSaIxEE17_S_check_init_lenEyRKS0_
	.def	_ZNSt6vectorIxSaIxEE17_S_check_init_lenEyRKS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIxSaIxEE17_S_check_init_lenEyRKS0_
_ZNSt6vectorIxSaIxEE17_S_check_init_lenEyRKS0_:
.LFB3288:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	40(%rbp), %rdx
	leaq	-1(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIxEC1ERKS_
	leaq	-1(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIxSaIxEE11_S_max_sizeERKS0_
	cmpq	32(%rbp), %rax
	setb	%bl
	leaq	-1(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIxED1Ev
	testb	%bl, %bl
	je	.L62
	leaq	.LC3(%rip), %rax
	movq	%rax, %rcx
	call	_ZSt20__throw_length_errorPKc
.L62:
	movq	32(%rbp), %rax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev
	.def	_ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev
_ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev:
.LFB3292:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIxED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIxSaIxEEC2EyRKS0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIxSaIxEEC2EyRKS0_
	.def	_ZNSt12_Vector_baseIxSaIxEEC2EyRKS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIxSaIxEEC2EyRKS0_
_ZNSt12_Vector_baseIxSaIxEEC2EyRKS0_:
.LFB3293:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	32(%rsp), %rbp
	.seh_setframe	%rbp, 32
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	32(%rbp), %rax
	movq	48(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_
	movq	40(%rbp), %rdx
	movq	32(%rbp), %rax
	movq	%rax, %rcx
.LEHB9:
	call	_ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEy
.LEHE9:
	jmp	.L68
.L67:
	movq	%rax, %rbx
	movq	32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB10:
	call	_Unwind_Resume
	nop
.LEHE10:
.L68:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA3293:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3293-.LLSDACSB3293
.LLSDACSB3293:
	.uleb128 .LEHB9-.LFB3293
	.uleb128 .LEHE9-.LEHB9
	.uleb128 .L67-.LFB3293
	.uleb128 0
	.uleb128 .LEHB10-.LFB3293
	.uleb128 .LEHE10-.LEHB10
	.uleb128 0
	.uleb128 0
.LLSDACSE3293:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEEC2EyRKS0_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIxSaIxEED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIxSaIxEED2Ev
	.def	_ZNSt12_Vector_baseIxSaIxEED2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIxSaIxEED2Ev
_ZNSt12_Vector_baseIxSaIxEED2Ev:
.LFB3296:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	16(%rax), %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$3, %rax
	movq	%rax, %rcx
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxy
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA3296:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3296-.LLSDACSB3296
.LLSDACSB3296:
.LLSDACSE3296:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEED2Ev,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt6vectorIxSaIxEE21_M_default_initializeEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIxSaIxEE21_M_default_initializeEy
	.def	_ZNSt6vectorIxSaIxEE21_M_default_initializeEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIxSaIxEE21_M_default_initializeEy
_ZNSt6vectorIxSaIxEE21_M_default_initializeEy:
.LFB3298:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv
	movq	%rax, %rcx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	24(%rbp), %rdx
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZSt27__uninitialized_default_n_aIPxyxET_S1_T0_RSaIT1_E
	movq	16(%rbp), %rdx
	movq	%rax, 8(%rdx)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv
	.def	_ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv
_ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv:
.LFB3299:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt8_DestroyIPxxEvT_S1_RSaIT0_E,"x"
	.linkonce discard
	.globl	_ZSt8_DestroyIPxxEvT_S1_RSaIT0_E
	.def	_ZSt8_DestroyIPxxEvT_S1_RSaIT0_E;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt8_DestroyIPxxEvT_S1_RSaIT0_E
_ZSt8_DestroyIPxxEvT_S1_RSaIT0_E:
.LFB3300:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt8_DestroyIPxEvT_S1_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEC1ERKS1_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEC1ERKS1_
	.def	_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEC1ERKS1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEC1ERKS1_
_ZN9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEEC1ERKS1_:
.LFB3303:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEE4baseEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEE4baseEv
	.def	_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEE4baseEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEE4baseEv
_ZNK9__gnu_cxx17__normal_iteratorIPxSt6vectorIxSaIxEEE4baseEv:
.LFB3304:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIxSaIxEE11_S_max_sizeERKS0_,"x"
	.linkonce discard
	.globl	_ZNSt6vectorIxSaIxEE11_S_max_sizeERKS0_
	.def	_ZNSt6vectorIxSaIxEE11_S_max_sizeERKS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIxSaIxEE11_S_max_sizeERKS0_
_ZNSt6vectorIxSaIxEE11_S_max_sizeERKS0_:
.LFB3403:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movabsq	$1152921504606846975, %rax
	movq	%rax, -8(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaIxEE8max_sizeERKS0_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdx
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt3minIyERKT_S2_S2_
	movq	(%rax), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaIxEC2ERKS_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaIxEC2ERKS_
	.def	_ZNSaIxEC2ERKS_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaIxEC2ERKS_
_ZNSaIxEC2ERKS_:
.LFB3405:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIxEC2ERKS0_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaIxEC1ERKS_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaIxEC1ERKS_
	.def	_ZNSaIxEC1ERKS_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaIxEC1ERKS_
_ZNSaIxEC1ERKS_:
.LFB3406:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIxEC2ERKS0_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_
	.def	_ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_
_ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_:
.LFB3409:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIxEC2ERKS_
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIxSaIxEE17_Vector_impl_dataC2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEy
	.def	_ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEy
_ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEy:
.LFB3410:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIxSaIxEE11_M_allocateEy
	movq	16(%rbp), %rdx
	movq	%rax, (%rdx)
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	24(%rbp), %rdx
	salq	$3, %rdx
	addq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 16(%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxy
	.def	_ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxy
_ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxy:
.LFB3411:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	cmpq	$0, 24(%rbp)
	je	.L85
	movq	16(%rbp), %rax
	movq	32(%rbp), %rcx
	movq	24(%rbp), %rdx
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxy
.L85:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt27__uninitialized_default_n_aIPxyxET_S1_T0_RSaIT1_E,"x"
	.linkonce discard
	.globl	_ZSt27__uninitialized_default_n_aIPxyxET_S1_T0_RSaIT1_E
	.def	_ZSt27__uninitialized_default_n_aIPxyxET_S1_T0_RSaIT1_E;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt27__uninitialized_default_n_aIPxyxET_S1_T0_RSaIT1_E
_ZSt27__uninitialized_default_n_aIPxyxET_S1_T0_RSaIT1_E:
.LFB3412:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt25__uninitialized_default_nIPxyET_S1_T0_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt8_DestroyIPxEvT_S1_,"x"
	.linkonce discard
	.globl	_ZSt8_DestroyIPxEvT_S1_
	.def	_ZSt8_DestroyIPxEvT_S1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt8_DestroyIPxEvT_S1_
_ZSt8_DestroyIPxEvT_S1_:
.LFB3413:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Destroy_auxILb1EE9__destroyIPxEEvT_S3_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaIxEE8max_sizeERKS0_,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaIxEE8max_sizeERKS0_
	.def	_ZNSt16allocator_traitsISaIxEE8max_sizeERKS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaIxEE8max_sizeERKS0_
_ZNSt16allocator_traitsISaIxEE8max_sizeERKS0_:
.LFB3483:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt15__new_allocatorIxE8max_sizeEv
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt3minIyERKT_S2_S2_,"x"
	.linkonce discard
	.globl	_ZSt3minIyERKT_S2_S2_
	.def	_ZSt3minIyERKT_S2_S2_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt3minIyERKT_S2_S2_
_ZSt3minIyERKT_S2_S2_:
.LFB3484:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	jnb	.L92
	movq	24(%rbp), %rax
	jmp	.L93
.L92:
	movq	16(%rbp), %rax
.L93:
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt15__new_allocatorIxEC2ERKS0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt15__new_allocatorIxEC2ERKS0_
	.def	_ZNSt15__new_allocatorIxEC2ERKS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt15__new_allocatorIxEC2ERKS0_
_ZNSt15__new_allocatorIxEC2ERKS0_:
.LFB3486:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE17_Vector_impl_dataC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIxSaIxEE17_Vector_impl_dataC2Ev
	.def	_ZNSt12_Vector_baseIxSaIxEE17_Vector_impl_dataC2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIxSaIxEE17_Vector_impl_dataC2Ev
_ZNSt12_Vector_baseIxSaIxEE17_Vector_impl_dataC2Ev:
.LFB3489:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	$0, (%rax)
	movq	16(%rbp), %rax
	movq	$0, 8(%rax)
	movq	16(%rbp), %rax
	movq	$0, 16(%rax)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE11_M_allocateEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIxSaIxEE11_M_allocateEy
	.def	_ZNSt12_Vector_baseIxSaIxEE11_M_allocateEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIxSaIxEE11_M_allocateEy
_ZNSt12_Vector_baseIxSaIxEE11_M_allocateEy:
.LFB3491:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	cmpq	$0, 24(%rbp)
	je	.L97
	movq	16(%rbp), %rax
	movq	24(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaIxEE8allocateERS0_y
	jmp	.L99
.L97:
	movl	$0, %eax
.L99:
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxy,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxy
	.def	_ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxy
_ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxy:
.LFB3492:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	32(%rbp), %rcx
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIxE10deallocateEPxy
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt25__uninitialized_default_nIPxyET_S1_T0_,"x"
	.linkonce discard
	.globl	_ZSt25__uninitialized_default_nIPxyET_S1_T0_
	.def	_ZSt25__uninitialized_default_nIPxyET_S1_T0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt25__uninitialized_default_nIPxyET_S1_T0_
_ZSt25__uninitialized_default_nIPxyET_S1_T0_:
.LFB3493:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movb	$1, -1(%rbp)
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPxyEET_S3_T0_
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Destroy_auxILb1EE9__destroyIPxEEvT_S3_,"x"
	.linkonce discard
	.globl	_ZNSt12_Destroy_auxILb1EE9__destroyIPxEEvT_S3_
	.def	_ZNSt12_Destroy_auxILb1EE9__destroyIPxEEvT_S3_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Destroy_auxILb1EE9__destroyIPxEEvT_S3_
_ZNSt12_Destroy_auxILb1EE9__destroyIPxEEvT_S3_:
.LFB3494:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt15__new_allocatorIxE8max_sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt15__new_allocatorIxE8max_sizeEv
	.def	_ZNKSt15__new_allocatorIxE8max_sizeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt15__new_allocatorIxE8max_sizeEv
_ZNKSt15__new_allocatorIxE8max_sizeEv:
.LFB3520:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt15__new_allocatorIxE11_M_max_sizeEv
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaIxEE8allocateERS0_y,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaIxEE8allocateERS0_y
	.def	_ZNSt16allocator_traitsISaIxEE8allocateERS0_y;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaIxEE8allocateERS0_y
_ZNSt16allocator_traitsISaIxEE8allocateERS0_y:
.LFB3521:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	movl	$0, %r8d
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIxE8allocateEyPKv
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt15__new_allocatorIxE10deallocateEPxy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt15__new_allocatorIxE10deallocateEPxy
	.def	_ZNSt15__new_allocatorIxE10deallocateEPxy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt15__new_allocatorIxE10deallocateEPxy
_ZNSt15__new_allocatorIxE10deallocateEPxy:
.LFB3522:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	32(%rbp), %rax
	leaq	0(,%rax,8), %rdx
	movq	24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZdlPvy
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPxyEET_S3_T0_,"x"
	.linkonce discard
	.globl	_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPxyEET_S3_T0_
	.def	_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPxyEET_S3_T0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPxyEET_S3_T0_
_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPxyEET_S3_T0_:
.LFB3523:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	cmpq	$0, 24(%rbp)
	je	.L111
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt11__addressofIxEPT_RS0_
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt10_ConstructIxJEEvPT_DpOT0_
	addq	$8, 16(%rbp)
	movq	24(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-8(%rbp), %rcx
	movq	16(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZSt6fill_nIPxyxET_S1_T0_RKT1_
	movq	%rax, 16(%rbp)
.L111:
	movq	16(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt15__new_allocatorIxE11_M_max_sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt15__new_allocatorIxE11_M_max_sizeEv
	.def	_ZNKSt15__new_allocatorIxE11_M_max_sizeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt15__new_allocatorIxE11_M_max_sizeEv
_ZNKSt15__new_allocatorIxE11_M_max_sizeEv:
.LFB3535:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movabsq	$1152921504606846975, %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt15__new_allocatorIxE8allocateEyPKv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt15__new_allocatorIxE8allocateEyPKv
	.def	_ZNSt15__new_allocatorIxE8allocateEyPKv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt15__new_allocatorIxE8allocateEyPKv
_ZNSt15__new_allocatorIxE8allocateEyPKv:
.LFB3536:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt15__new_allocatorIxE11_M_max_sizeEv
	cmpq	24(%rbp), %rax
	setb	%al
	movzbl	%al, %eax
	testl	%eax, %eax
	setne	%al
	testb	%al, %al
	je	.L116
	movabsq	$2305843009213693951, %rax
	cmpq	24(%rbp), %rax
	jnb	.L117
	call	_ZSt28__throw_bad_array_new_lengthv
.L117:
	call	_ZSt17__throw_bad_allocv
.L116:
	movq	24(%rbp), %rax
	salq	$3, %rax
	movq	%rax, %rcx
	call	_Znwy
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt11__addressofIxEPT_RS0_,"x"
	.linkonce discard
	.globl	_ZSt11__addressofIxEPT_RS0_
	.def	_ZSt11__addressofIxEPT_RS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt11__addressofIxEPT_RS0_
_ZSt11__addressofIxEPT_RS0_:
.LFB3537:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt10_ConstructIxJEEvPT_DpOT0_,"x"
	.linkonce discard
	.globl	_ZSt10_ConstructIxJEEvPT_DpOT0_
	.def	_ZSt10_ConstructIxJEEvPT_DpOT0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt10_ConstructIxJEEvPT_DpOT0_
_ZSt10_ConstructIxJEEvPT_DpOT0_:
.LFB3538:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rdx
	movl	$8, %ecx
	call	_ZnwyPv
	movq	$0, (%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt6fill_nIPxyxET_S1_T0_RKT1_,"x"
	.linkonce discard
	.globl	_ZSt6fill_nIPxyxET_S1_T0_RKT1_
	.def	_ZSt6fill_nIPxyxET_S1_T0_RKT1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt6fill_nIPxyxET_S1_T0_RKT1_
_ZSt6fill_nIPxyxET_S1_T0_RKT1_:
.LFB3539:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	32(%rsp), %rbp
	.seh_setframe	%rbp, 32
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	leaq	32(%rbp), %rcx
	call	_ZSt19__iterator_categoryIPxENSt15iterator_traitsIT_E17iterator_categoryERKS2_
	movq	40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt17__size_to_integery
	movq	%rax, %rdx
	movq	32(%rbp), %rax
	movq	48(%rbp), %rcx
	movl	%ebx, %r9d
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZSt10__fill_n_aIPxyxET_S1_T0_RKT1_St26random_access_iterator_tag
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt19__iterator_categoryIPxENSt15iterator_traitsIT_E17iterator_categoryERKS2_,"x"
	.linkonce discard
	.globl	_ZSt19__iterator_categoryIPxENSt15iterator_traitsIT_E17iterator_categoryERKS2_
	.def	_ZSt19__iterator_categoryIPxENSt15iterator_traitsIT_E17iterator_categoryERKS2_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt19__iterator_categoryIPxENSt15iterator_traitsIT_E17iterator_categoryERKS2_
_ZSt19__iterator_categoryIPxENSt15iterator_traitsIT_E17iterator_categoryERKS2_:
.LFB3544:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt10__fill_n_aIPxyxET_S1_T0_RKT1_St26random_access_iterator_tag,"x"
	.linkonce discard
	.globl	_ZSt10__fill_n_aIPxyxET_S1_T0_RKT1_St26random_access_iterator_tag
	.def	_ZSt10__fill_n_aIPxyxET_S1_T0_RKT1_St26random_access_iterator_tag;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt10__fill_n_aIPxyxET_S1_T0_RKT1_St26random_access_iterator_tag
_ZSt10__fill_n_aIPxyxET_S1_T0_RKT1_St26random_access_iterator_tag:
.LFB3545:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	cmpq	$0, 24(%rbp)
	jne	.L127
	movq	16(%rbp), %rax
	jmp	.L128
.L127:
	movq	24(%rbp), %rax
	leaq	0(,%rax,8), %rdx
	movq	16(%rbp), %rax
	addq	%rax, %rdx
	movq	32(%rbp), %rcx
	movq	16(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZSt8__fill_aIPxxEvT_S1_RKT0_
	movq	24(%rbp), %rax
	leaq	0(,%rax,8), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
.L128:
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt8__fill_aIPxxEvT_S1_RKT0_,"x"
	.linkonce discard
	.globl	_ZSt8__fill_aIPxxEvT_S1_RKT0_
	.def	_ZSt8__fill_aIPxxEvT_S1_RKT0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt8__fill_aIPxxEvT_S1_RKT0_
_ZSt8__fill_aIPxxEvT_S1_RKT0_:
.LFB3546:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	32(%rbp), %rcx
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZSt9__fill_a1IPxxEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt9__fill_a1IPxxEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_,"x"
	.linkonce discard
	.globl	_ZSt9__fill_a1IPxxEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_
	.def	_ZSt9__fill_a1IPxxEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt9__fill_a1IPxxEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_
_ZSt9__fill_a1IPxxEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_:
.LFB3547:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	32(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L131
.L132:
	movq	16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, (%rax)
	addq	$8, 16(%rbp)
.L131:
	movq	16(%rbp), %rax
	cmpq	24(%rbp), %rax
	jne	.L132
	nop
	nop
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.text
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB3549:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB3548:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 16(%rbp)
	jne	.L136
	cmpl	$65535, 24(%rbp)
	jne	.L136
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rax
	movq	%rax, %rcx
	call	atexit
.L136:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_main
_GLOBAL__sub_I_main:
.LFB3550:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.ident	"GCC: (Rev10, Built by MSYS2 project) 12.2.0"
	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	_ZNSirsERx;	.scl	2;	.type	32;	.endef
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	pow;	.scl	2;	.type	32;	.endef
	.def	_ZSt20__throw_length_errorPKc;	.scl	2;	.type	32;	.endef
	.def	_ZdlPvy;	.scl	2;	.type	32;	.endef
	.def	_ZSt28__throw_bad_array_new_lengthv;	.scl	2;	.type	32;	.endef
	.def	_ZSt17__throw_bad_allocv;	.scl	2;	.type	32;	.endef
	.def	_Znwy;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin
