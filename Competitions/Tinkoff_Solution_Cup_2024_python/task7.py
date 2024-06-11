# Misunderstanding question ***

from collections import defaultdict
from datetime import datetime, timedelta
from sys import stdin

def generate_candles(text: str) -> str:
    # Сгенерировать свечи
    intervals = {"1min": 1, "2min": 2, "5min": 5}
    candles: dict[tuple[str, str, datetime], list[float]] = defaultdict(list)
    for line in text.splitlines():
        pos, price, time = line.split(', ')
        time = datetime.strptime(time, "%Y-%m-%dT%H:%M:%SZ")

        # Формирование свечей
        for interval, minutes in intervals.items():
            interval_start = time - timedelta(
                minutes=time.minute % minutes, 
                seconds=time.second,
                milliseconds=time.microsecond
            )
            candles[(pos, interval, interval_start)].append(float(price))
        
    result: list[str] = []
    for key in sorted(candles):
        pos, interval, interval_start = key
        prices = candles[key]
        result.append(f"{pos},{prices[0]:.2f},{max(prices):.2f},{min(prices):.2f},{prices[-1]:.2f},{interval_start.strftime('%Y-%m-%dT%H:%M:%SZ')},{interval}")
    return '\n'.join(result)

def main():
    # TSLA,191.97,2023-04-11T12:04:30Z
    # TCSG,32.49,2023-04-11T12:04:30Z
    # TSLA,192.50,2023-04-11T12:05:15Z
    # TCSG,32.17,2023-04-11T12:05:15Z
    # TSLA,191.30,2023-04-11T12:05:53Z
    # TCSG,31.84,2023-04-11T12:05:53Z
    # TSLA,191.60,2023-04-11T12:06:39Z
    # TCSG,31.53,2023-04-11T12:06:39Z
    text = stdin.read()
    print(generate_candles(text))

if __name__ == '__main__':
    main()