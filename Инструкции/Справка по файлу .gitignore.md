Для настройки исключения части файлов, которые не требуется загружать в гит:  
Создайте файл .gitignore в корень репозитория следующего содержания
```
.vscode/
build/
*.exe
```

В котором исключается вся папка настроек проекта в VS Code, а так же конечные скомпилированные исполняемые файлы.

Для более тонкой настройки файла gitignore можно почитать <a href="https://tyapk.ru/blog/post/gitignore">тут</a>
 или <a href="https://ru.hexlet.io/courses/git_base/lessons/git_gitignore/theory_unit">тут</a>