#Concatenate String
first_word = "Coding"
second_word = "For"
third_word = "All"

sentence = first_word + " " + second_word + " " + third_word
print(sentence) 
print()

#split string
words = sentence.split()
print(words) 
print()

#find string
sentences = "You cannot end a sentence with because because because is a conjunction"
print(sentences.find("because")) 
print()
print(sentences.rindex("because")) 
print()

#slice out string
sliced_string = sentences[31:54]
print(sliced_string)
print()