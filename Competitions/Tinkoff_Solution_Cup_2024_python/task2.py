# Misunderstanding question ***

def decrypt(text: str) -> str:
    # О - К - Н - А => подсказка намикает на кодировку Windows ~ cp1251
    decoded_text = text.encode('cp1251').decode('utf-8')

    # Находим сдвиг по подсказке О - К - Н - А
    alpha = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя"
    shifted_alpha = alpha[alpha.index('о'):] + alpha[:alpha.index('о')]
    print(shifted_alpha)

    # Создаем таблицу перекодировки
    trans_table = str.maketrans(shifted_alpha, alpha)

    # Применяем таблицу перекодировки и возвращаем результат
    return decoded_text.translate(trans_table)

def main():
    print(decrypt('РҐРѕС‰СѓСЏ СЋСЉРЅР¶СѓР±, Рѕ С‘РѕС€СЊС‡С‰ СЋСЉРѕС‘СѓР±.'))
    # sentence = input()
    # print(decrypt(sentence))

if __name__ == '__main__':
    main()

