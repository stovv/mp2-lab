# ���������� ����� �� �������� ����������� ������ 

**����������:**

- [���������� ������](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#����������-������)
- [����������� ������������](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#�����������-������������)
- [����������� ������������](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#�����������-������������)
	- [������������ �����������](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#������������-�����������)
	- [����� ��������� �������](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#�����-���������-�������)
	- [�������� ��������� ���������](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#��������-���������-���������)
	- [�������� �������� ������](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#��������-��������-������)
		- [��������� ������ "������"](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#���������-������-������)
		- [��������� ������ "����"](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#���������-������-����)
	- [�������� ����������](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#��������-����������)
		- [�������� �������� � ����������� ������](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#��������-��������-�-�����������-������)
		- [�������� �������� ��������� � ����������� ������](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#��������-��������-���������-�-�����������-������)
- [����������](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#����������)
- [����������](https://github.com/Maxim-Doronin/mp2-lab3-lists-stack#����������)
 
## ���������� ������
**���� ������ ������������ ������** � ����������� �� ����� ���������������� �++ ����������� ����������, ����������� ������������ ��������� ������ � ����, ���������� �� ������������ ��������� � ������. 

 
� �������� ������� ���������� ������, ����������� �������� �������������� ��������� ������ �������������� ��������� � �����������. ������� ���������� ����������, ��������������� ������ ���������, ��� ������� ������ � �������������� ���������� ��������� � ��������� ���� � �������� ������� ���������, � ��������� � ������ ��������� ��������������� ����������� ��������� � ����������� ����, ��������� ���������.

�������� ���������� ���������� ��� ������������ ������ ������� � ������.

## ����������� ������������
### *������ ���������� � ���� ������*

������ ��������� ������������� ��� �������� ����������� ��������������� ��������� �� ��������� ������ � ����������� � ������������ ���������� ���������� �� ������ ������ � ������ ���������� ����������, ��������� �������������.

����� ��������� ���������, ���������� ������� ����������� ���� `sample_list.exe` � ����� ��������� ����������� ���������.

������:

1. ������� �������������� ��������� � ������� ������� "����" � ������� ����������� ����� ���������
![start](/img/input.png)
2. ������� �������� ������ �� ���������� ����������, ������� ������� "����" ����� ������� ���������� ��������.
3. ![start](/img/2.png)
4. �������� ��������������� ��������� � ��������� ���������.
![finish](/img/end.png)

��� ���������� ������ ������� ����� �������.


## ����������� ������������ 

### *������������ �����������*

� ���� ������������ ������ �������������� ��������� �����������:

- ������� �������� ������ Git. 
- ����� ���������� Microsoft Visual Studio 2017 .


### *����� ��������� �������*

��������� �������:
- `img` � ���������� � �������������, ������������ � ������ � ������������ ������. 
- `include` � ���������� ��� ���������� ������������ ������.
- `samples` � ���������� ��� ���������� ��������� ����������.
- `build` � ���������� � ������� ������� � �������� ��� Visual Studio 2017
- `src` � ���������� ��� ���������� �������� ����� (cpp-�����).
- `README.md` � ����� � ����������� ������������ ������.
- ��������� �����
    - `.gitignore` � �������� ���������� ������, ������������ Git ��� ���������� ������ � �����������.


### *�������� ��������� ���������*
- `Unit` � ��������� �������� "����" ������. "����" ������ � ���� �������� "�����" � ��������� �� ��������� ����, �� ���� �� ������ ������ �� ������.
- `List` � ����� "������", ������������ � ���� ����� *`Unit`*.
- `Stack`* � ����� "����", ������������ � ���� ����� *`List`*.
- `postfix_lib` � ����������� ����������, ������������ ���������� ������ *`Stack`*, ���������� ����� *`Postfix`* �� ������������ �������� �������� ��������������� ��������� �� ��������� ����� � ����������� � ���������� ����������� ���������. �������� 2 ������
	- `gen_form` � ����� ����������������� �������� ��������� � ����������� ������, ����������� ������������ ������. ������� � �������� ������ � ��������� ���.
	- `calc_form` � ����� ���������� ����������, ����������� ��������� ��������������� ��������� �� ������ ������. ������� ������ � ��������� ��� (��������� � ����������� �����), �������� � ������������ �����. ��� �� ��������� ������������ ��������� ������, � ������������ ���������� ��������� � ��������.
- `main` � ���������� ����������, ���������� ������� `main`, ������� ����������� � ������������ ��������� � ��������� ������ � ������� ��������� � ����������� ����� � ���������, ���������� �� ������� ���������� `postfix_lib`.

### *�������� �������� ������*

#### ��������� ������ "������"

����������� �������� ������ � ������������ ��������� ������, ��������� �� ���������� "�����", ������ �� ������� �������� ������ ������������� ���� � ��������� �� ����������� ���� ������. ��������� ���������� �������� ������ ����� ����, ��� �������� ��������� ����� ������. ���������� �� ������ �������� ��������� �� ��� ������ ������� (root).

![list](/img/list.png)

�������������� ������������� ����� �������� �������� �������� ����������� ��������: ������� ��������� �������� ������ ����� �� ��������� � �������� ������������ ��������� ������ � ������ ����������, � ������� ������ ������ ������ ���� ������� ��� ����������� �������.

� ������ ������������ ������ ��������� ������ "������" ������������ � ���� ������ *`List`*, ������� �������� � ���� ��������� ������:

- ����������� �� ���������.
- ����������� ����������� �������.
- ����������.
- `erase` � ������������� ����� �������� �������� � �������� ������ ��� �� ��������� �� �������.
- `push_up` � ����� �������� �������� � �������� ������ � ������� ��� � ������ ������.
- `push_back` � ����� �������� �������� � �������� ������ � ������� ��� � ����� ������.
- `push_under` � ����� ������� ��������, �� ������� ������� ���������, �� �������� � �������� ������.
- `pop_back` � ����� �������� �������� �� ����� ������, ���������� ���� ��������.
- `pop_up` � ����� �������� �� ������ ������, ���������� ����.
- `get_size` � ����� ���������� ���������� ��������� ������
- �������� ��������� ���������� ��� ����������� ������������.


����� *`List`* ���������� � �������������� �������� ��� �������� ��� ������������� � ���������� ������ ������.

#### ��������� ������ "����"

���� � ������������ ��������� ������, �������������� ����� ������ ���������, �������������� �� �������� FILO (����. first in � last out, ���������� ������ � ������ �����).

� ������ ������������ ������ ��������� ������ "����" ����������� � ���� ������������ ��������� ������, �� ���� ������ ������� �������� ������ �������� ���������� � ����� ��������� �� ��������� ������� �����. 

![stack](/img/stack.png)

����������� ��� ����� ������������ ��� ������ �������� ������, ��������, ������ ��� ����. ��� ������������� ����������� ������� ����� ����� ����������� ����, �� ���������� ��� ���. ����� ���� ����������, ���� ������������ ��� ����������� �������� ������, ����������� ������ � ���������� � ����������� ����� �������������� ��������� (��������� ��������� ���������� � ������ ������������ ������ � �������� ������� ������������� ������).

� ������ ������������ ������ ��������� ������ "����" ������������ � ���� ������ *`Stack`*, ������� ���������� � ���� ������ ������ *`List`* � �������� ��������� ������:

- ����������� �� ���������, ������� ���� �������� ����������� ������ *`List`*.
- ����������� �����������.
- ����������.
- `empty` � ����� �������� ����� �� �������
- `full` � ����� �������� ����� �� �������. �� �����, ����������� ������� ��������� ������ � ����������� �������� ������������ ��������� ��� �������� ������ ���� ������.
- `push` � ����� ���������� �������� � �������� ��������� �� ������� �����.
- `pop` � ����� ������� �������� � ������� �����. ����� ���������� �������� ��������.

����� *`Stack`* ���������� � �������������� �������� ��� �������� ��� ������������� � ���������� ������ ������.


### *�������� ����������*

#### �������� �������� � ����������� ������

�������� ��������� �������� �� ��������� ������ � �����������:

1. ������ �������� �������� ���������

	- ��������� ��������� `*` � ������� `/` ��������� ���������, ������ 3.
	- ��������� �������� `+` � ��������� `-` ��������� 2
	- �������� ����������� ������ `(` ��������� 1.
	- �������� ��������� `=` ��������� 0.

2. ��������� 2 �����: ���� ��� �������� ������� ����������� ����� `Stack_one` � ���� ��� �������� �������� `Stack_two`.
3. ��������� ��������������� �����-�������, ��� ���� �������� 4 ������:

	1. ���������� �������. ����� �� ����������� � ���� `Stack_one`.
	2. ����������� ��������, ��������� ������� ����, ��� ��������� ��������, ������� �� ������� ����� `Stack_two`, ��� ���� `Stack_two` ����. � ���� ������ �������� ����������� � ���� ��� �������� �������� `Stack_two`.
	3. ����������� ��������, ��������� ������� ����� ��� ���� ���������� ��������, ������� �� ������� ����� `Stack_two`. � ���� ������ ��� ��������, ��������� ������� ������ ������ ��������������� � ���� `Stack_one` �� ��� ���, ���� �� ������� ����� `Stack_two` �� �������� �������� � ������� ����������� ��� `Stack_two` �� ������ ������. ����� �� �������� ����������� � ���� �������� ��������.
	4. ����������� �������� ����������� ������. � ���� ������ �� ����� `Stack_two` ��������������� ��� �������� � `Stack_one` �� ������� ��������� �������� ����������� ������. �������� ����������� ������ ��������� �� ����� ��������.

4. ���� ��������� �����������, �� ��� �������� �� ����� �������� `Stack_two` ��������������� � ���� �������� ������� ����������� ����� `Stack_one`.

#### �������� �������� ��������� � ����������� ������

�������� ��������� ���������� ��������������� ��������� � ����������� �����:

1. ��������� ������ ���� � ������������ ����� ������ `double_list`, ��� ���������� ��������� �������� ������������.
2. ��������� ��������������� ������ �� ����.
3. ���� ����������� �������, �� ������������� �����, ������� ����� ��������������� ����� �������� � ����������� � `double_list`
4. ��������� ������ ���� `end_list`
5. ���������� �������. � ���� ������ �� ������� ����� `end_list` ����������� ������� �� �������`double_list`.
	5. ����������� ��������. ����� �� ����� `end_list` ��������� 2 ��������, ��� ���� ����������� ��������, ��������� �������� ����� ����������� � ����.
6. ��� ���������� ����� ��������������� ���������, � ����� ����� ���������� ������������ ������� � ��������� ��������� ���������.

## ����������
� ���� ������������ ������ ���� ����������� ���������, ��������������� ������������ �������. ��������� ���� � ������ ���� ����������� � �������������� ��������� �������, ��� ��� ����� �������� �������� �������������� ������ ���������.

���������� �������� �������� ��������������� ��������� �� ��������� ����� � ����������� � ���������� ��� ����������.


## ����������

- ������ � � ��������-��������������� ���������������� � �++ � 2016 � 928 �.
- ������ ������ � ������ ���: ��������, ������ � ����������� � 2013 � 464 �.
