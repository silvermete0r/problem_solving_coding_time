package main

import (
	"fmt"
	"time"
)

type Observer interface {
	Update(stock *Stock)
}

type Stock struct {
	symbol    string
	price     float64
	observers []Observer
}

func NewStock(symbol string, price float64) *Stock {
	return &Stock{
		symbol: symbol,
		price:  price,
	}
}

func (s *Stock) Attach(observer Observer) {
	s.observers = append(s.observers, observer)
}

func (s *Stock) Detach(observer Observer) {
	for i, obs := range s.observers {
		if obs == observer {
			s.observers = append(s.observers[:i], s.observers[i+1:]...)
			break
		}
	}
}

func (s *Stock) NotifyObservers() {
	for _, observer := range s.observers {
		observer.Update(s)
	}
}

func (s *Stock) SetPrice(price float64) {
	s.price = price
	s.NotifyObservers()
}

func (s *Stock) GetPrice() float64 {
	return s.price
}

type Trader struct {
	name string
}

func NewTrader(name string) *Trader {
	return &Trader{name: name}
}

func (t *Trader) Update(stock *Stock) {
	fmt.Printf("%s received an update for stock %s. New price: %.2f\n", t.name, stock.symbol, stock.GetPrice())
}

func main() {
	stock := NewStock("TESLA", 150.0)
	trader1 := NewTrader("Trader 1")
	trader2 := NewTrader("Trader 2")

	stock.Attach(trader1)
	stock.Attach(trader2)

	for i := 0; i < 5; i++ {
		newPrice := stock.GetPrice() + float64(i)
		stock.SetPrice(newPrice)
		time.Sleep(2 * time.Second)
	}
}
