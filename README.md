# Репозиторий для изучения OpenGL
Проект разрабатывается в Linux: Ubuntu 24.04.4 LTS
### Установка

Вот как можно инициализировать проект OpenGL с помощью VS Code:

- Установите среду разработки VSCode [Подробнее здесь](https://code.visualstudio.com/docs/setup/linux)

- Установите компиляторы C++ и GLFW следующим образом:

Установка комиляторов для работы VSCode
```sh
sudo apt install build-essential gcc  g++ gdb
```

Установка GLFW на для работы с графикой OpenGL
```sh
sudo apt-get install libglfw3-dev
```

Установка CMake для сборки проекта
```sh
sudo apt install cmake
```

Не забудьте в VSCode установить расширения для работы C++ и CMake.

### Сборка проекта

В процессе сборки используются makefile и g++, настройка выполняется в файле **CMakeLists** в корневом каталоге проекта.

### VSCode интеграция

Предоставляется каталог проекта VS Code, который включает в себя настройки среды C++, задачи для сборки и запуск для отладки.

Он основан на расширении VS Code для C/C++ [Более подробная информация о том, как он работает, здесь](https://code.visualstudio.com/docs/languages/cpp)
