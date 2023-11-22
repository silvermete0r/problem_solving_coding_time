// Command Pattern

package main

import "fmt"

// Command Interface
type Command interface {
	Execute()
}

// Receiver
type Light struct{}

func (l *Light) TurnOn() {
	fmt.Println("Light is On!")
}

func (l *Light) TurnOff() {
	fmt.Println("Light is Off!")
}

// Concrete Commands
type TurnOnCommand struct {
	light *Light
}

func (c *TurnOnCommand) Execute() {
	c.light.TurnOn()
}

type TurnOffCommand struct {
	light *Light
}

func (c *TurnOffCommand) Execute() {
	c.light.TurnOff()
}

// Invoker
type RemoteControl struct {
	command Command
}

func (rc *RemoteControl) PressButton() {
	rc.command.Execute()
}

func main() {
	light := &Light{}
	TurnOnCommand := &TurnOnCommand{light: light}
	TurnOffCommand := &TurnOffCommand{light: light}

	remote := &RemoteControl{command: TurnOnCommand}
	remote.PressButton()

	remote.command = TurnOffCommand
	remote.PressButton()
}
