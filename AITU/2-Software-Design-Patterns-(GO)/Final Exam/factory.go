// Factory Pattern

package main

import "fmt"

// Product Interface
type Vehicle interface {
	Drive()
}

// Concrete Products
type Car struct{}

func (c *Car) Drive() {
	fmt.Println("Driving a Car!")
}

type Bike struct{}

func (b *Bike) Drive() {
	fmt.Println("Riding a Bike!")
}

// Creator Interface
type CarFactory struct{}

func (cf *CarFactory) Create() Vehicle {
	return &Car{}
}

type BikeFactory struct{}

func (bf *BikeFactory) Create() Vehicle {
	return &Bike{}
}

func main() {
	CarFactory := &CarFactory{}
	car := CarFactory.Create()
	car.Drive()

	BikeFactory := &BikeFactory{}
	bike := BikeFactory.Create()
	bike.Drive()
}
