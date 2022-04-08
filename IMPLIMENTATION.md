# sorted:
  - declaration:
    - `t_array` multi struct fill by `$ history > txt.txt`
    - `t_sorted` multi struct for any `command` + `rating`
  - function:
    - `count_of_duplicate`: 
      - fitch all `command`
      - rating
# main
  - declaration:
    - `t_sorted` : array of struct `struct {id,word1,word2,word3...word10}`
  - function:
    - `loading()`: return the arays of struct by read `struct.txt`
    - `top_word("git")`: 
      - `find("git")`: return id of `git` founded in `t_sorted`
      - `print(id)`: print 10 first of `t_sorted[id].word`
    - `top_tow_word("git")`: 
      - `find("git+clone")`: return id of `git+clone` founded in `t_sorted`
      - `print(id)`: print 10 first of `t_sorted[id].word`
