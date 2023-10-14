.data
n: .word  3                	#定义字 n=3，即目标是求3！
.text
main: 
        la  $t5, n		#把$t5的地址设置成n的地址
        lw   $t5, 0($t5) 	#把$t5地址对应的值给$t5寄存器
        add $a0,$zero,$t5	#把$t5的值及存到$a0中
        jal fact   		#跳转到fact标签,开始阶乘       
        add $a0,$zero,$v0	#把$v0的值存到$a0中，保存答案
        li $v0,1		#给$v0赋值为1，使syscall执行输出
        syscall			#输出$a0的值
        li $v0,10		#将$v0赋值为10，使syscall执行停止程序
        syscall			#程序结束
fact:
	addi $sp, $sp, -8	#调整栈指针，建立两个字的空间
	sw $ra,4($sp)		#第一个空间保存返回地址
	sw $a0,0($sp)		#第二个空间保存参数
	slti $t0,$a0,1		#比较$a0是否小于1
	beq $t0, $zero,L1	#如果n>=1，跳转到L1，递归fact(n-1)
	addi $v0, $zero, 1	#把$v0赋值成1
	addi $sp,$sp,8		#出栈
	jr $ra			#return到上层递归n=1
L1:     addi $a0,$a0,-1		#得到n-1,（n>=1）
        jal fact		#跳转到fact
        lw $a0,0($sp)		#把sp的值取到$a0中
        lw $ra,4($sp)		#记录下返回的地址
        addi $sp,$sp,8		#栈指针更改，抛出两个元素，出栈操作
        mul $v0,$a0,$v0		#$a0的值与$v0的值相乘，保存在v0中
        jr $ra			#返回，return到上一层递归中
