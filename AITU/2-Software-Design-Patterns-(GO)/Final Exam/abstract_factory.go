// Abstract Factory Pattern

package main

import "fmt"

// Abstract Product A
type Chair interface {
	Sit()
}

// Abstract Product B
type Table interface {
	Eat()
}

// Abstract Factory
type FurnitureFactory interface {
	CreateChair() Chair
	CreateTable() Table
}

// Concrete Products
type ModernChair struct{}

func (mc *ModernChair) Sit() {
	fmt.Println("Sitting on a modern chair!")
}

type ModernTable struct{}

func (mt *ModernTable) Eat() {
	fmt.Println("Eating on a modern table!")
}

// Concrete Factory
type ModernFurnitureFactory struct{}

func (mf *ModernFurnitureFactory) CreateChair() Chair {
	return &ModernChair{}
}

func (mf *ModernFurnitureFactory) CreateTable() Table {
	return &ModernTable{}
}

func main() {
	ModernFactory := &ModernFurnitureFactory{}
	chair := ModernFactory.CreateChair()
	table := ModernFactory.CreateTable()

	chair.Sit()
	table.Eat()
}
