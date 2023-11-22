// Observer pattern

package main

import "fmt"

// Observer Interface
type Observer interface {
	Update(data string)
}

// Subject Interface
type Subject interface {
	Attach(observer Observer)
	Notify(data string)
}

// Concrete Subject
type NewsAgency struct {
	Observers []Observer
}

func (n *NewsAgency) Attach(observer Observer) {
	n.Observers = append(n.Observers, observer)
}

func (n *NewsAgency) Notify(data string) {
	for _, observer := range n.Observers {
		observer.Update(data)
	}
}

// Concrete Observer
type NewsChannel struct {
	Name string
}

func (nc *NewsChannel) Update(data string) {
	fmt.Printf("[%s] News received: %s\n", nc.Name, data)
}

func main() {
	agency := &NewsAgency{}
	channel1 := &NewsChannel{Name: "BBC"}
	channel2 := &NewsChannel{Name: "New York Times"}
	channel3 := &NewsChannel{Name: "Tengrinews"}
	agency.Attach(channel1)
	agency.Attach(channel2)
	agency.Attach(channel3)
	agency.Notify("OpenAI CEO was removed for his own Company and immediately received an Offer from Microsoft!")
}
