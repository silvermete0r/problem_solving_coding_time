// Strategy pattern

package main

import "fmt"

// Strategy interface
type PaymentStrategy interface {
	Pay(amount float64)
}

// Concrete strategy
type CreditCardPayment struct{}

func (c *CreditCardPayment) Pay(amount float64) {
	fmt.Printf("Paid %.2f using Credit Card\n", amount)
}

type PayPalPayment struct{}

func (p *PayPalPayment) Pay(amount float64) {
	fmt.Printf("Paid %.2f using PayPal\n", amount)
}

type GooglePayPayment struct{}

func (g *GooglePayPayment) Pay(amount float64) {
	fmt.Printf("Paid %.2f using Google Pay", amount)
}

// Context
type ShoppingCart struct {
	PaymentMethod PaymentStrategy
}

func (s *ShoppingCart) Checkout(amount float64) {
	s.PaymentMethod.Pay(amount)
}

func main() {
	cart := ShoppingCart{PaymentMethod: &CreditCardPayment{}}
	cart.Checkout(703.453)

	cart.PaymentMethod = &PayPalPayment{}
	cart.Checkout(894.201)

	cart.PaymentMethod = &GooglePayPayment{}
	cart.Checkout(123.128)
}
