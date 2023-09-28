package main

import (
	"fmt"
)

type EncryptionStrategy interface {
	Encrypt(text string, key int) string
	Decrypt(text string, key int) string
}

type XORStrategy struct{}

func (x XORStrategy) Encrypt(text string, key int) string {
	result := ""
	for _, char := range text {
		encryptedChar := char ^ rune(key)
		result += string(encryptedChar)
	}
	return result
}

func (x XORStrategy) Decrypt(text string, key int) string {
	return x.Encrypt(text, key)
}

type CaesarStrategy struct{}

func (c CaesarStrategy) Encrypt(text string, key int) string {
	result := ""
	for _, char := range text {
		if char >= 'A' && char <= 'Z' {
			encryptedChar := 'A' + (char-'A'+rune(key))%26
			result += string(encryptedChar)
		} else if char >= 'a' && char <= 'z' {
			encryptedChar := 'a' + (char-'a'+rune(key))%26
			result += string(encryptedChar)
		} else {
			result += string(char)
		}
	}
	return result
}

func (c CaesarStrategy) Decrypt(text string, key int) string {
	return c.Encrypt(text, 26-key)
}

func main() {
	fmt.Println("Welcome to the Encryptor/Decryptor Console App")

	var strategy EncryptionStrategy
	for {
		fmt.Println("Choose an encryption strategy:")
		fmt.Println("1. XOR Encryption")
		fmt.Println("2. Caesar Cipher Encryption")
		fmt.Print("Enter the number of your choice (1/2): ")

		var choice int
		_, err := fmt.Scanf("%d", &choice)
		if err != nil {
			fmt.Println("Invalid input. Please enter a valid choice (1/2).")
			continue
		}

		switch choice {
		case 1:
			strategy = XORStrategy{}
		case 2:
			strategy = CaesarStrategy{}
		default:
			fmt.Println("Invalid choice. Please enter 1 or 2.")
			continue
		}

		break
	}

	_, _ = fmt.Scanln() // Clear Scan buffer

	var text string
	var choice, key int

	fmt.Print("You want to encrypt(1) or decrypt(0) => 1 or 2: ")
	_, _ = fmt.Scanf("%d", &choice)

	_, _ = fmt.Scanln() // Clear Scan buffer

	fmt.Print("Enter text to encrypt/decrypt: ")
	_, _ = fmt.Scanln(&text)

	_, _ = fmt.Scan() // Clear Scan buffer

	fmt.Print("Enter encryption/decryption key: ")
	_, err := fmt.Scanf("%d", &key)
	if err != nil {
		fmt.Println("Invalid key. Please enter a valid integer key.")
		return
	}

	switch choice {
	case 1:
		encryptedText := strategy.Encrypt(text, key)
		fmt.Println("Encrypted Text:", encryptedText)
		return
	case 2:
		decryptedText := strategy.Decrypt(text, key)
		fmt.Println("Decrypted Text:", decryptedText)
		return
	default:
		fmt.Println("Invalid choice. Please enter 1 or 2.")
		return
	}
}
