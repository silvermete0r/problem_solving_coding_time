// Singleton Pattern

package main

import (
	"fmt"
	"sync"
)

// Singleton
type DatabaseManager struct {
	connection string
}

var instance *DatabaseManager
var once sync.Once

func GetDatabaseManager() *DatabaseManager {
	once.Do(func() {
		instance = &DatabaseManager{connection: "Initialized Connection..."}
	})
	return instance
}

func main() {
	dbManager1 := GetDatabaseManager()
	fmt.Println(dbManager1.connection)

	dbManager2 := GetDatabaseManager()
	fmt.Println(dbManager2.connection)
}
