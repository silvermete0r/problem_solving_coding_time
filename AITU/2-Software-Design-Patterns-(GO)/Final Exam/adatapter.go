// Adapter Pattern

package main

import "fmt"

// Target Interface
type Target interface {
	Request()
}

// Adaptee
type Adaptee struct{}

func (a *Adaptee) SpecificRequest() {
	fmt.Println("240V Adapter!")
}

// Adapter
type Adapter struct {
	adaptee *Adaptee
}

func (a *Adapter) Requst() {
	a.adaptee.SpecificRequest()
}

func main() {
	adaptee := &Adaptee{}
	adapter := &Adapter{adaptee: adaptee}
	adapter.Requst()
}
