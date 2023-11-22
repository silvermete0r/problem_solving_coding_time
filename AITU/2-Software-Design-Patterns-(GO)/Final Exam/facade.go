// Facade Pattern

package main

import "fmt"

// Subsystem Components
type CPU struct{}

func (cpu *CPU) Start() {
	fmt.Println("CPU is starting..")
}

type Memory struct{}

func (m *Memory) Load() {
	fmt.Println("Memory is loading..")
}

type HDD struct{}

func (hdd *HDD) Read() {
	fmt.Println("HardDrive is reading..")
}

// Facade
type ComputerFacade struct {
	cpu    *CPU
	memory *Memory
	hdd    *HDD
}

func NewComputerFacade() *ComputerFacade {
	return &ComputerFacade{
		cpu:    &CPU{},
		memory: &Memory{},
		hdd:    &HDD{},
	}
}

func (cf *ComputerFacade) Start() {
	cf.cpu.Start()
	cf.memory.Load()
	cf.hdd.Read()
	fmt.Println("Computer is started!")
}

func main() {
	ComputerFacade := NewComputerFacade()
	ComputerFacade.Start()
}
