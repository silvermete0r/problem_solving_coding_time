// Decorator Pattern

package main

import "fmt"

// Component Interface
type Coffee interface {
	Cost() float64
	Description() string
}

// Concrete Component
type SimpleCoffee struct{}

func (s *SimpleCoffee) Cost() float64 {
	return 10.0
}

func (s *SimpleCoffee) Description() string {
	return "Simple Morning Coffee"
}

// Decorator
type MilkDecorator struct {
	coffee Coffee
}

func (m *MilkDecorator) Cost() float64 {
	return m.coffee.Cost() + 2.0
}

func (m *MilkDecorator) Description() string {
	return m.coffee.Description() + " + Milk"
}

func main() {
	coffee := &SimpleCoffee{}
	fmt.Printf("Cost: $%.2f, Description: %s\n", coffee.Cost(), coffee.Description())

	milkCoffee := &MilkDecorator{coffee: coffee}
	fmt.Printf("Cost: $%.2f, Description: %s\n", milkCoffee.Cost(), milkCoffee.Description())
}
