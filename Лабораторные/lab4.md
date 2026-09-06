### Лабораторная работа номер 4
----------------------------------

**Тема:** Классы, конструкторы и деструкторы. Управление памятью через `void*`. Эмуляция полиморфизма в C++.

**Критерии выполнения:**
- Каждое задание должно быть выполнено в виде **класса-менеджера**.
- В классе обязательно реализовать:
  - конструктор по умолчанию,
  - конструктор с параметрами,
  - конструктор копирования,
  - оператор копирующего присваивания,
  - конструктор перемещения,
  - оператор перемещающего присваивания,
  - деструктор.
- Все данные (документы, сенсоры, ресурсы и т.п.) являются **фиктивными**, никакой работы с реальными файлами, устройствами или сетью не предполагается.
- Основная цель – научиться правильно управлять объектами и памятью.

---

### Вариант 1: «Гетерогенная коллекция данных»

**Базовый вариант**
1. Создайте структуры:
   - `TextDocument { int pages; }`
   - `Spreadsheet { int rows; int columns; }`
   - `Image { int width; int height; }`
2. Создайте перечисление `enum class DataType { TEXT, SPREADSHEET, IMAGE };`
3. Создайте класс `DataNode` (поля: `void* data; DataType type; std::string name;`).
4. Создайте класс `DataCollection`, который хранит массив `DataNode`.
5. Реализуйте методы:
   - добавление элемента,
   - поиск элементов по типу,
   - вывод статистики.

**Усложнённый вариант**
- Реализуйте метод удаления элемента по имени.
- Добавьте метод сохранения коллекции в текстовый вид (простой вывод в файл или в консоль).

---

### Вариант 2: «Система плагинов»

**Базовый вариант**
1. Создайте структуры:
   - `AudioPlugin { int channels; }`
   - `VideoPlugin { int resolution; }`
   - `ImagePlugin { int formats_supported; }`
2. Создайте перечисление `enum class PluginType { AUDIO, VIDEO, IMAGE };`
3. Создайте класс `Plugin` (поля: `void* plugin_data; PluginType type; bool is_loaded;`).
4. Создайте класс `PluginManager`, который хранит массив `Plugin`.
5. Методы:
   - загрузка плагина,
   - демонстрация работы (короткая строка в консоль),
   - выгрузка.

**Усложнённый вариант**
- Реализуйте поиск плагина по типу.
- Добавьте метод подсчёта загруженных плагинов.

---

### Вариант 3: «Ресурсы игрового движка»

**Базовый вариант**
1. Создайте структуры: `Texture`, `Mesh`, `Sound`.
2. Перечисление `enum class ResourceType { TEXTURE, MESH, SOUND };`
3. Класс `Resource { void* data; ResourceType type; bool is_loaded; }`
4. Класс `ResourceManager`, массив ресурсов.
5. Методы:
   - загрузка ресурса,
   - выгрузка ресурса,
   - поиск по типу.

**Усложнённый вариант**
- Добавьте метод подсчёта ресурсов каждого типа.
- Реализуйте простой отчёт (вывод списка всех ресурсов).

---

### Вариант 4: «Сенсорная сеть»

**Базовый вариант**
1. Структуры: `TemperatureSensor`, `PressureSensor`, `MotionSensor`.
2. Перечисление `enum class SensorType { TEMPERATURE, PRESSURE, MOTION };`
3. Класс `Sensor { void* sensor_data; SensorType type; int timestamp; }`
4. Класс `SensorNetwork`, массив сенсоров.
5. Методы:
   - опрос сенсоров (генерация случайных данных),
   - фильтрация по типу,
   - калибровка (сброс значений).

**Усложнённый вариант**
- Добавьте метод сохранения последних значений в журнал (консольный вывод).
- Реализуйте поиск сенсора по времени создания.

---

### Вариант 5: «Графический редактор»

**Базовый вариант**
1. Структуры: `Rectangle`, `Ellipse`, `TextObject`.
2. Перечисление `enum class ObjectType { RECTANGLE, ELLIPSE, TEXT };`
3. Класс `GraphicObject { void* object_data; ObjectType type; int z_index; }`
4. Класс `Canvas`, массив объектов.
5. Методы:
   - добавление объекта,
   - изменение `z_index`,
   - экспорт списка в консоль.

**Усложнённый вариант**
- Реализуйте метод сортировки объектов по `z_index`.
- Добавьте возможность удаления объекта по индексу.

---

### Вариант 6: «Финансовые транзакции»

**Базовый вариант**
1. Структуры: `Payment`, `Transfer`, `Exchange`.
2. Перечисление `enum class TransactionType { PAYMENT, TRANSFER, EXCHANGE };`
3. Класс `Transaction { void* transaction_data; TransactionType type; bool is_completed; }`
4. Класс `TransactionProcessor`, массив транзакций.
5. Методы:
   - добавление транзакции,
   - обработка транзакции (установить `is_completed = true`),
   - вывод отчёта.

**Усложнённый вариант**
- Добавьте метод поиска транзакций по типу.
- Сделайте статистику (сколько транзакций каждого типа завершено).

---

### Вариант 7: «Умный дом»

**Базовый вариант**
1. Структуры: `Light`, `Thermostat`, `SecurityCamera`.
2. Перечисление `enum class DeviceType { LIGHT, THERMOSTAT, CAMERA };`
3. Класс `SmartDevice { void* device_data; DeviceType type; bool is_online; }`
4. Класс `SmartHome`, массив устройств.
5. Методы:
   - отправка команд (например, включить свет),
   - проверка статуса,
   - поиск по типу.

**Усложнённый вариант**
- Добавьте метод подсчёта устройств, находящихся в сети.
- Реализуйте удаление устройства.

---

### Вариант 8: «Источники данных»

**Базовый вариант**
1. Структуры: `CSVData`, `JSONData`, `XMLData`.
2. Перечисление `enum class DataSourceType { CSV, JSON, XML };`
3. Класс `DataSource { void* source_data; DataSourceType type; std::string name; }`
4. Класс `DataAnalyzer`, массив источников.
5. Методы:
   - загрузка источника,
   - конвертация (например, вывод строки «CSV → JSON»),
   - сравнительный анализ (сравнить количество элементов).

**Усложнённый вариант**
- Добавьте метод удаления источника данных.
- Реализуйте отчёт: список всех источников с указанием их типа.


## Шаблон класса с правилом пяти

В шаблоне есть:
- конструктор по умолчанию,
- конструктор с параметрами,
- конструктор копирования,
- оператор копирующего присваивания,
- конструктор перемещения,
- оператор перемещающего присваивания,
- деструктор.

```cpp

#include <iostream>
#include <string>

class Example {
private:
    int* data;       // динамический ресурс
    size_t size;     // размер ресурса
    std::string name;

public:
    // 1. Конструктор по умолчанию
    Example() : data(nullptr), size(0), name("empty") {
        std::cout << "Default constructor\n";
    }

    // 2. Конструктор с параметрами
    Example(size_t n, std::string n_ame = "example") 
        : data(new int[n]), size(n), name(std::move(n_ame)) {
        std::cout << "Parameterized constructor\n";
    }

    // 3. Конструктор копирования
    Example(const Example& other) 
        : data(new int[other.size]), size(other.size), name(other.name) {
        std::copy(other.data, other.data + size, data);
        std::cout << "Copy constructor\n";
    }

    // 4. Оператор копирующего присваивания
    Example& operator=(const Example& other) {
        std::cout << "Copy assignment\n";
        if (this == &other) return *this; // защита от самоприсваивания
        delete[] data;
        size = other.size;
        name = other.name;
        data = new int[size];
        std::copy(other.data, other.data + size, data);
        return *this;
    }

    // 5. Конструктор перемещения
    Example(Example&& other) noexcept 
        : data(other.data), size(other.size), name(std::move(other.name)) {
        other.data = nullptr;
        other.size = 0;
        std::cout << "Move constructor\n";
    }

    // 6. Оператор перемещающего присваивания
    Example& operator=(Example&& other) noexcept {
        std::cout << "Move assignment\n";
        if (this == &other) return *this;
        delete[] data;
        data = other.data;
        size = other.size;
        name = std::move(other.name);
        other.data = nullptr;
        other.size = 0;
        return *this;
    }

    // 7. Деструктор
    ~Example() {
        delete[] data;
        std::cout << "Destructor\n";
    }

    // Вспомогательный метод
    void print() const {
        std::cout << "Example(name=" << name << ", size=" << size << ")\n";
    }
};
```
