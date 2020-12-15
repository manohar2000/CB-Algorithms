# Useful references
1. Copying String : string s_new(s_old) , string s_new = s_old
2. Checking if string is empty : s.empty()
3. Length of the string : s.length()
4. Appending a string : s+= "concat string"
5. Clearing a string : s.clear()
6. Comparing Strings : s1.compare(s2) it gives 0 is matches else <0 or >0 , s1>s2 , create your own comparator and pass it as a argument in the sort(str,str+len,your_comparator) function
7. Finding index of a word : s.find("word") This would return the index of starting letter of the given word
8. Erasing a word from a string : s.erase(index_of_word,len_of_word)
9. Iterating over a string : Loop like on the array, iterator pointer , for(auto c:s1){ cout<<c}
10. **Tokenizing words in a string : strtok()**
11. **Getting the char arr for a string: (char asterix)str.c_str**
