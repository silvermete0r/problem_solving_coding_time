package main

import (
	"fmt"
	"strings"
)

type TextFormatter interface {
	Format(text string) string
}

type BaseTextFormatter struct{}

func (b *BaseTextFormatter) Format(text string) string {
	return text
}

type UppercaseDecorator struct {
	Component TextFormatter
}

func (u *UppercaseDecorator) Format(text string) string {
	return strings.ToUpper(u.Component.Format(text))
}

type ReversedDecorator struct {
	Component TextFormatter
}

func (r *ReversedDecorator) Format(text string) string {
	runes := []rune(r.Component.Format(text))
	reversed := make([]rune, len(runes))
	for i, j := len(runes)-1, 0; i >= 0; i, j = i-1, j+1 {
		reversed[j] = runes[i]
	}
	return string(reversed)
}

func main() {
	textFormatter := &BaseTextFormatter{}

	uppercaseDecorator := &UppercaseDecorator{Component: textFormatter}
	reversedDecorator := &ReversedDecorator{Component: uppercaseDecorator}

	text := "!Step on no petS!"
	formattedText := reversedDecorator.Format(text)

	fmt.Println(formattedText)
}
