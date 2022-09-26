# django_vue_graphql
Пишем сайт с бэкендом на Django, фронтендом на Vue и связкой между ними на GraphQL.

Инструкция актуальна для Linux-систем.
Используемые технологии:
    python~=3.9
    Django~=4.1
    PostgreSQL
========================================================================================================================
Скопируйте репозиторий с помощью команды:
$ git clone https://github.com/RuslanSayfullin/django_vue_graphql.git

Перейдите в основную директорию с помощью команды: 
$ cd django_vue_graphql

========================================================================================================================
Создать и активировать виртуальное окружение:
$ python -m venv venv
$ source venv/bin/activate
(venv) $

========================================================================================================================
Перейдите в директорию проекта с помощью команды: 
$ cd backend
Установить зависимости из файла requirements.txt:
$ pip install -r requirements.txt

========================================================================================================================
Создание БД

$ sudo su - postgres
Теперь запускаем командную оболочку PostgreSQL:
$ psql 

=# CREATE DATABASE django_vue_graphql;
=# CREATE USER portaluser WITH PASSWORD 'myPassword';
=# GRANT ALL PRIVILEGES ON DATABASE django_vue_graphql TO portaluser;
=# \q
$ exit

========================================================================================================================
Для запуска выполнить следующие команды:

Команда для создания миграций приложения для базы данных
$ python3 manage.py makemigrations
$ python3 manage.py migrate

Создание суперпользователя
$ python3 manage.py createsuperuser

Будут выведены следующие выходные данные. Введите требуемое имя пользователя, электронную почту и пароль:
по умолчанию почта admin@admin.com пароль: 12345

Username (leave blank to use 'admin'): admin
Email address: admin@admin.com
Password: ********
Password (again): ********
Superuser created successfully.

Команда для запуска приложения
python3 manage.py runserver

Приложение будет доступно по адресу: http://127.0.0.1:8000/

Источники
========================================================================================================================
https://proglib.io/p/polnyy-fullstek-pishem-sayt-na-django-vue-i-graphql-2021-07-22




