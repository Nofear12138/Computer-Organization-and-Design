.data
n: .word  3                	#������ n=3����Ŀ������3��
.text
main: 
        la  $t5, n		#��$t5�ĵ�ַ���ó�n�ĵ�ַ
        lw   $t5, 0($t5) 	#��$t5��ַ��Ӧ��ֵ��$t5�Ĵ���
        add $a0,$zero,$t5	#��$t5��ֵ���浽$a0��
        jal fact   		#��ת��fact��ǩ,��ʼ�׳�       
        add $a0,$zero,$v0	#��$v0��ֵ�浽$a0�У������
        li $v0,1		#��$v0��ֵΪ1��ʹsyscallִ�����
        syscall			#���$a0��ֵ
        li $v0,10		#��$v0��ֵΪ10��ʹsyscallִ��ֹͣ����
        syscall			#�������
fact:
	addi $sp, $sp, -8	#����ջָ�룬���������ֵĿռ�
	sw $ra,4($sp)		#��һ���ռ䱣�淵�ص�ַ
	sw $a0,0($sp)		#�ڶ����ռ䱣�����
	slti $t0,$a0,1		#�Ƚ�$a0�Ƿ�С��1
	beq $t0, $zero,L1	#���n>=1����ת��L1���ݹ�fact(n-1)
	addi $v0, $zero, 1	#��$v0��ֵ��1
	addi $sp,$sp,8		#��ջ
	jr $ra			#return���ϲ�ݹ�n=1
L1:     addi $a0,$a0,-1		#�õ�n-1,��n>=1��
        jal fact		#��ת��fact
        lw $a0,0($sp)		#��sp��ֵȡ��$a0��
        lw $ra,4($sp)		#��¼�·��صĵ�ַ
        addi $sp,$sp,8		#ջָ����ģ��׳�����Ԫ�أ���ջ����
        mul $v0,$a0,$v0		#$a0��ֵ��$v0��ֵ��ˣ�������v0��
        jr $ra			#���أ�return����һ��ݹ���
