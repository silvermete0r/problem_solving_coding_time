// Cache Manager using Singleton Pattern

package main

import (
	"fmt"
	"sync"
)

type CacheManager struct {
	cache map[string]interface{}
	mu    sync.Mutex
}

var instance *CacheManager
var once sync.Once

func GetCacheManagerInstance() *CacheManager {
	once.Do(func() {
		instance = &CacheManager{
			cache: make(map[string]interface{}),
		}
	})
	return instance
}

func (c *CacheManager) Set(key string, value interface{}) {
	c.mu.Lock()
	defer c.mu.Unlock()
	c.cache[key] = value
}

func (c *CacheManager) Get(key string) interface{} {
	c.mu.Lock()
	defer c.mu.Unlock()
	return c.cache[key]
}

func main() {
	cache := GetCacheManagerInstance()

	cache.Set("planguage", "C++")
	cache.Set("snake", "Python")
	cache.Set("lets", "Go")

	val1 := cache.Get("planguage")
	val2 := cache.Get("snake")
	val3 := cache.Get("lets")

	fmt.Println("planguage: ", val1)
	fmt.Println("snake: ", val2)
	fmt.Println("lets: ", val3)
}
