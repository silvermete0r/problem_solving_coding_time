import re

# Banned words: горячий кофе, чай

def find_ban_words(text: str) -> list[str]:
    ban_words: list[str] = []
    for match in re.finditer(r'\w+|[^\w\s]+', text):
        if re.match(r'ча[|й|я|ю|йный|его]', match.group()):
            ban_words.append('чай')
    for match in re.finditer(r'горяч[ий|его|ему|ем|ая|ую|ей|ем|им|ем|еми|ем|ем].*кофе', text):
        ban_words.append('горячий кофе')
    return sorted(ban_words)

def main():
    # Потом пили чай с конфетами и орешками, разговаривали.
    text = input()
    print(', '.join(find_ban_words(text)))

if __name__ == '__main__':
    main()
