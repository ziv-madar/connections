all: connections

connections: main.c my_mat.c
	gcc -Wall -o $@ $^

test: connections
	./$< < IO_examples/inputs/input1.txt | diff - IO_examples/outputs/output1.txt
	./$< < IO_examples/inputs/input2.txt | diff - IO_examples/outputs/output2.txt
