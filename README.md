# TP-project
За основу взята серия игр Civilization. На данный момент готов только файл с определением начальных юнитов,
которые в течение игры могут быть прокачаны до более продвинутых. К сожалению, мне не удалось нормально реализовать паттерны,
т.к. я не нашел мест их применения. Была мысль использовать Builder при создании юнитов для необязательных полей (например, юниты, которые 
могут перемещаться по воде и по суше), однако в этом не было особого смысла, т.к.большинство присваиваний общее для всех юнитов,
а разбиение на небольшое количество частей лишь ухудшало логику и читаемость. Еще планировалось добавить возможность строить
объединения юнитов при помощи паттена builder, но, снова же, более лаконичным и естественным кажется создание супер-юнита,
для которого будут суммироваться показатели составляющих частей.

Возможно, есть смысл вообще сменить концепцию и начать заново, но достойных идей пока нет.


Дополнил несколькими новыми классами. В планах написать паттерн фасад для управления юнитами, поскольку у между ними достаточно сложное взаимодействие, зависящее от очков перемещения, типов юнитов и их статуса в плане защиты. Поскольку перемещение тоже должно быть включено в паттерн, пришлось заняться реализацией карты, но возникли проблемы. 

22.05.18 Доделал генерацию карты, применил порождающий паттерн Factory Method при создании клеток и различных их типов. Паттерн Facade все еще в планах, необходимо до этого дописать функции для перемещения юнитов по карте, возможно, подкорректировать функции их взаимодействия, а затем объединить их все в один интерфе с помощью данного паттерна.
