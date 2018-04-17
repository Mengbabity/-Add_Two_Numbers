# -Add_Two_Numbers

#add_two_numbers

两个链表的数相加（由尾到头），结果也存入一个链表，同样反向表示。

开始被反向表示迷惑。其实直接可以从头到尾依次相加（在判断不为空后），设一个进位值，用 相加结果/10 表示即可，而真正存入的值为 相加结果%10 表示。

主要熟悉链表的使用方法。

#Merge Two Sorted Lists

在while中进行l1与l2的值的插入。若1的值小，插入1，否则插入2。while的条件是两个链表均为true。
最后将没放完的链表直接赋给p->next。

#Remove Duplicates from Sorted List

去掉链表中重复的元素，并返回该链表。

首先定义一个指向该链表的指针，在while循环中，若指针当前指向的值与其next指向的值相等，就将其next指向下一个元素的指针赋给当前指向的next的指针。
即p->next=p->next->next，即删去了后面重复的元素，仅保留了第一个。
