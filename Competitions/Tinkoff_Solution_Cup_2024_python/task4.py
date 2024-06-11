import json
from datetime import datetime as dt, timedelta as td, timezone as tz, date as d
from typing import Any

THRESHOLD = dt(2013, 1, 3, 12, tzinfo=tz(td(hours=3)))
MIN_AGE = 35
ROLE = "admin"

def filter_data(text: str) -> str:
    data = json.loads(text)
    today = dt.today()
    filtered_data: list[dict[str, Any]] = []
    for row in data:
        born = dt.strptime(row['profile']['born'], '%Y-%m-%d').date()
        age = today.year - born.year - ((today.month, today.day) < (born.month, born.day))
        if (
            dt.fromisoformat(row['CreatedAt']) >= THRESHOLD
            and ROLE in row['roles']
            and age >= MIN_AGE
        ):
            filtered_data.append({
                'username': row['username'],
                'email': row['email'],
                'name': row['profile']['name'],
                'age': age,
            })
    return json.dumps(filtered_data)

def main():
    text = input()
    print(filter_data(text))

if __name__ == '__main__':
    main() 