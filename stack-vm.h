#ifndef STACK_VM_H
#define STACK_VM_H

#include <iostream>
#include <vector>

// type definition
typedef int32_t i32;

class StackVM {
	i32 pc = 100; // program counter register
	i32 sp = 0; // stack pointer register
	std::vector<i32> memory; // RAM
	i32 typ = 0;
	i32 dat = 0;
	i32 running = 1;

	// private function
	i32 getType(i32 instruction);
	i32 getData(i32 instruction);
	void fetch();
	void decode();
	void execute();
	void doPrimitive();

	public:
	StackVM();
	void run();
	void loadProgram(std::vector<i32> prog);
};

#endif
