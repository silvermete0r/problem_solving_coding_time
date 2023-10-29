// Undo-Redo System using Command Pattern

package main

import (
	"fmt"
)

type Command interface {
	Execute()
	Undo()
}

type TextEditor struct {
	content string
}

type AddTextCommand struct {
	editor *TextEditor
	text   string
}

func (c *AddTextCommand) Execute() {
	c.editor.content += c.text
}

func (c *AddTextCommand) Undo() {
	c.editor.content = c.editor.content[:len(c.editor.content)-len(c.text)]
}

type CommandHistory struct {
	undoStack []Command
	redoStack []Command
}

func (h *CommandHistory) ExecuteCommand(cmd Command) {
	cmd.Execute()
	h.undoStack = append(h.undoStack, cmd)
	h.redoStack = nil
}

func (h *CommandHistory) Undo() {
	if len(h.undoStack) == 0 {
		return
	}

	cmd := h.undoStack[len(h.undoStack)-1]
	cmd.Undo()
	h.redoStack = append(h.redoStack, cmd)
	h.undoStack = h.undoStack[:len(h.undoStack)-1]
}

func (h *CommandHistory) Redo() {
	if len(h.redoStack) == 0 {
		return
	}

	cmd := h.redoStack[len(h.redoStack)-1]
	cmd.Execute()
	h.undoStack = append(h.undoStack, cmd)
	h.redoStack = h.redoStack[:len(h.redoStack)-1]
}

func main() {
	editor := &TextEditor{}
	history := &CommandHistory{}

	addCmd1 := &AddTextCommand{editor: editor, text: "C++ is "}
	addCmd2 := &AddTextCommand{editor: editor, text: "the Best!"}

	history.ExecuteCommand(addCmd1)
	fmt.Println("Current Editor Content: ", editor.content)

	history.ExecuteCommand(addCmd2)
	fmt.Println("Current Editor Content: ", editor.content)

	fmt.Println("-------------------")

	history.Undo()
	fmt.Println("Editor Content after undo: ", editor.content)

	history.Redo()
	fmt.Println("Editor Content after undo: ", editor.content)
}
