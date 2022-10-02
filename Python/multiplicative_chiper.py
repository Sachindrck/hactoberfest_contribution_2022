class multiplicative_chiper:

    def __init__(self, input_text, keyA):
        self.input_text = input_text
        self.keyA = keyA

    def encrypt(self):
        chiperText = ""
        abjad = "abcdefghijklmnopqrstuvwxyz 1234567890-_=+[],.<>/?"
        for words in self.input_text.lower():
            wordsIndex = (abjad.find(words) * self.keyA)  % len(abjad)
            chiperText += abjad[wordsIndex]
        return chiperText

    def decrypt(self):
        plainText = ""
        abjad = "abcdefghijklmnopqrstuvwxyz 1234567890-_=+[],.<>/?"
        for words in self.input_text.lower():
            wordsIndex = (abjad.find(words) / self.keyA) % len(abjad)
            plainText += abjad[int(wordsIndex)]
            
        return plainText

def main():

    input_text = "Hello"
    KeyA = 2
    encrypt = multiplicative_chiper(input_text, KeyA)

    encrypt_text = encrypt.encrypt()


    decrypt = multiplicative_chiper(encrypt_text, KeyA)

    decrypt_text = decrypt.decrypt()

    print("encrypt text =",encrypt_text)
    print("decrypt text = ", decrypt_text)


if __name__ == "__main__":
    main()