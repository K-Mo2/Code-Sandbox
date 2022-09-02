def check_word(word):

    word_list = list(str(word))

    while True:

        user_input = input("Guess Word: ")

        input_list = list(user_input)

        answer_arr = ['_'] * len(word)

        supported_letters = []
        
        i = 0
        
        for l in range(min(len(word_list), len(input_list))):
            if input_list[l] in word_list:
                i = word_list.index(input_list[l], i)
                answer_arr[i] = input_list[l]
                supported_letters.append(input_list[l])
            
                


        if answer_arr == word_list:
            print(answer_arr)
            print("Letters exist: ", supported_letters)
            return print("You Win!")
        else:
            print(answer_arr)
            print("Letters exist: ", supported_letters)
            return print("You Lost!")
            
check_word("cheese")
