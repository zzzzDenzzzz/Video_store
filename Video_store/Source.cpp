#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<string>

const int GENRE = 10;
const std::string ARR_GENRE[GENRE] =
{
		"romcom",
		"sci-fi",
		"horror",
		"documentary",
		"animation",
		"action",
		"thriller",
		"drama",
		"comedy",
		"adventure"
};

struct Film
{
	std::string film_title;
	std::string director;
	std::string genre;
	double popularity_rating;
	int price;
};

enum Genre
{
	ROMCOM = 48,
	SCI_FI,
	HORROR,
	DOCUMENTARY,
	ANIMATION,
	ACTION,
	THRILLER,
	DRAMA,
	COMEDY,
	ADVENTURE
};

enum Menu
{
	EXIT = 48,          // выход из программы
	NAME_SEARCH,        // поиск по названию
	SEARCH_BY_GENRE,    // поиск по жанру
	SEARCH_BY_DIRECTOR, // поиск по режиссеру
	THE_MOST_POPULAR,   // самый популярный фильм в жанре
	ADD_A_NOTE,         // добавить запись
	SHOW_ALL_ENTRIES,   // показать все записи
};

// запрос на количество записей при старте программы
int inputNumberNote()
{
	std::cout << "Укажите сколько записей вы хотите добавить: ";
	int note;
	std::cin >> note;

	return note;
}

// поиск по названию фильма
void nameSearch(Film *film, int &note)
{
	std::cout << "Укажите название фильма: ";
	std::string title;
	getline(std::cin, title);
	std::cout << "####################\n";
	int match_count = 0;
	for (int i = 0; i < note; i++)
	{
		if (film[i].film_title == title)
		{
			match_count++;
		}
	}
	std::cout << "Совпадение: " << match_count << std::endl;
	std::cout << "####################\n";
	for (int i = 0; i < note; i++)
	{
		if (film[i].film_title == title)
		{
			std::cout << "Название фильма: " << film[i].film_title << std::endl;
			std::cout << "Режиссер: " << film[i].director << std::endl;
			std::cout << "Жанр: " << film[i].genre << std::endl;
			std::cout << "Рейтинг: " << film[i].popularity_rating << std::endl;
			std::cout << "Цена: " << film[i].price << std::endl;
			std::cout << "####################\n";
		}
	}
}

// поиск по жанру
void searchByGenre(Film *film, int &note)
{
	std::cout << "Укажите жанр фильма: \n";
	
	for (int i = 0; i < GENRE; i++)
	{
		std::cout << i << " - " << ARR_GENRE[i] << std::endl;
	}
	bool exit_cicle = true;
	std::string genre;
	do
	{
		int button = _getch();

		switch (button)
		{
		case ROMCOM:
			genre = ARR_GENRE[0];
			exit_cicle = false;
			break;
		case SCI_FI:
			genre = ARR_GENRE[1];
			exit_cicle = false;
			break;
		case HORROR:
			genre = ARR_GENRE[2];
			exit_cicle = false;
			break;
		case DOCUMENTARY:
			genre = ARR_GENRE[3];
			exit_cicle = false;
			break;
		case ANIMATION:
			genre = ARR_GENRE[4];
			exit_cicle = false;
			break;
		case ACTION:
			genre = ARR_GENRE[5];
			exit_cicle = false;
			break;
		case THRILLER:
			genre = ARR_GENRE[6];
			exit_cicle = false;
			break;
		case DRAMA:
			genre = ARR_GENRE[7];
			exit_cicle = false;
			break;
		case COMEDY:
			genre = ARR_GENRE[8];
			exit_cicle = false;
			break;
		case ADVENTURE:
			genre = ARR_GENRE[9];
			exit_cicle = false;
			break;
		default:
			std::cout << "Ошибка ввода! Повторите попытку!\n";
			break;
		}
	} while (exit_cicle);

	std::cout << "####################\n";
	int match_count = 0;
	for (int i = 0; i < note; i++)
	{
		if (film[i].genre == genre)
		{
			match_count++;
		}
	}
	std::cout << "Совпадение: " << match_count << std::endl;
	std::cout << "####################\n";
	for (int i = 0; i < note; i++)
	{
		if (film[i].genre == genre)
		{
			std::cout << "Название фильма: " << film[i].film_title << std::endl;
			std::cout << "Режиссер: " << film[i].director << std::endl;
			std::cout << "Жанр: " << film[i].genre << std::endl;
			std::cout << "Рейтинг: " << film[i].popularity_rating << std::endl;
			std::cout << "Цена: " << film[i].price << std::endl;
			std::cout << "####################\n";
		}
	}
}

// поиск по режиссеру
void searchByDirector(Film *film, int &note)
{
	std::cout << "Укажите режиссера: ";
	std::string director;
	getline(std::cin, director);
	std::cout << "####################\n";
	int match_count = 0;
	for (int i = 0; i < note; i++)
	{
		if (film[i].director == director)
		{
			match_count++;
		}
	}
	std::cout << "Совпадение: " << match_count << std::endl;
	std::cout << "####################\n";
	for (int i = 0; i < note; i++)
	{
		if (film[i].director == director)
		{
			std::cout << "Название фильма: " << film[i].film_title << std::endl;
			std::cout << "Режиссер: " << film[i].director << std::endl;
			std::cout << "Жанр: " << film[i].genre << std::endl;
			std::cout << "Рейтинг: " << film[i].popularity_rating << std::endl;
			std::cout << "Цена: " << film[i].price << std::endl;
			std::cout << "####################\n";
		}
	}
}

// поиск самого популярного в жанре
void theMostPopular(Film *film, int &note)
{
	std::cout << "Укажите жанр фильма: \n";

	for (int i = 0; i < GENRE; i++)
	{
		std::cout << i << " - " << ARR_GENRE[i] << std::endl;
	}
	bool exit_cicle = true;
	std::string genre;
	do
	{
		int button = _getch();

		switch (button)
		{
		case ROMCOM:
			genre = ARR_GENRE[0];
			exit_cicle = false;
			break;
		case SCI_FI:
			genre = ARR_GENRE[1];
			exit_cicle = false;
			break;
		case HORROR:
			genre = ARR_GENRE[2];
			exit_cicle = false;
			break;
		case DOCUMENTARY:
			genre = ARR_GENRE[3];
			exit_cicle = false;
			break;
		case ANIMATION:
			genre = ARR_GENRE[4];
			exit_cicle = false;
			break;
		case ACTION:
			genre = ARR_GENRE[5];
			exit_cicle = false;
			break;
		case THRILLER:
			genre = ARR_GENRE[6];
			exit_cicle = false;
			break;
		case DRAMA:
			genre = ARR_GENRE[7];
			exit_cicle = false;
			break;
		case COMEDY:
			genre = ARR_GENRE[8];
			exit_cicle = false;
			break;
		case ADVENTURE:
			genre = ARR_GENRE[9];
			exit_cicle = false;
			break;
		default:
			std::cout << "Ошибка ввода! Повторите попытку!\n";
			break;
		}
	} while (exit_cicle);

	std::cout << "####################\n";
	double the_most_popular = film[0].popularity_rating;
	for (int i = 1; i < note; i++)
	{
		if (film[i].popularity_rating > the_most_popular)
		{
			the_most_popular = film[i].popularity_rating;
		}
	}
	std::cout << "####################\n";
	std::cout << "Самый популярный фильм в жанре " << genre << ":\n";
	for (int i = 0; i < note; i++)
	{
		if (the_most_popular == film[i].popularity_rating && film[i].genre == genre)
		{
			std::cout << "Название фильма: " << film[i].film_title << std::endl;
			std::cout << "Режиссер: " << film[i].director << std::endl;
			std::cout << "Жанр: " << film[i].genre << std::endl;
			std::cout << "Рейтинг: " << film[i].popularity_rating << std::endl;
			std::cout << "Цена: " << film[i].price << std::endl;
			std::cout << "####################\n";
		}
	}
}

// инициализация записи
Film *initNote(Film &film)
{
	std::cout << "Введите название фильма: ";
	getline(std::cin, film.film_title);
	std::cout << "Укажите режиссера: ";
	getline(std::cin, film.director);
	std::cout << "Выберите жанр фильма:\n";
	for (int i = 0; i < GENRE; i++)
	{
		std::cout << i << " - " << ARR_GENRE[i] << std::endl;
	}

	bool exit_cicle = true;
	do
	{
		int button = _getch();

		switch (button)
		{
		case ROMCOM:
			film.genre = ARR_GENRE[0];
			exit_cicle = false;
			break;
		case SCI_FI:
			film.genre = ARR_GENRE[1];
			exit_cicle = false;
			break;
		case HORROR:
			film.genre = ARR_GENRE[2];
			exit_cicle = false;
			break;
		case DOCUMENTARY:
			film.genre = ARR_GENRE[3];
			exit_cicle = false;
			break;
		case ANIMATION:
			film.genre = ARR_GENRE[4];
			exit_cicle = false;
			break;
		case ACTION:
			film.genre = ARR_GENRE[5];
			exit_cicle = false;
			break;
		case THRILLER:
			film.genre = ARR_GENRE[6];
			exit_cicle = false;
			break;
		case DRAMA:
			film.genre = ARR_GENRE[7];
			exit_cicle = false;
			break;
		case COMEDY:
			film.genre = ARR_GENRE[8];
			exit_cicle = false;
			break;
		case ADVENTURE:
			film.genre = ARR_GENRE[9];
			exit_cicle = false;
			break;
		default:
			std::cout << "Ошибка ввода! Повторите попытку!\n";
			break;
		}
	} while (exit_cicle);

	std::cout << "Введите рейтинг: ";
	std::cin >> film.popularity_rating;
	std::cout << "Укажите цену: ";
	std::cin >> film.price;
	std::cin.ignore();
	
	return &film;
}

// добавление одной записи
Film *addANote(Film *film, int &note)
{
	note++;
	Film *tmp = new Film[note];
	for (int i = 0; i < note - 1; i++)
	{
		tmp[i] = film[i];
	}
	tmp[note - 1] = *initNote(*film);
	delete[]film;
	return tmp;
}

// добавление записи на место стартовой
Film *copyANote(Film *film, int &note)
{
	Film *tmp = new Film[note];
	tmp[note - 1] = *initNote(*film);
	delete[]film;
	return tmp;
}

// вывод всех записей
void showAllEntries(Film *film, int note)
{
	std::cout << "####################\n";
	for (int i = 0; i < note; i++)
	{
		std::cout << "Название фильма: " << film[i].film_title << std::endl;
		std::cout << "Режиссер: " << film[i].director << std::endl;
		std::cout << "Жанр: " << film[i].genre << std::endl;
		std::cout << "Рейтинг: " << film[i].popularity_rating << std::endl;
		std::cout << "Цена: " << film[i].price << std::endl;
		std::cout << "####################\n";
	}
}

// инициализация всех записей при старте программы
Film *initAllNote(Film *film, int &note)
{
	for (int i = 0; i < note; i++)
	{
		film[i] = *initNote(film[i]);
	}
	return film;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int note = inputNumberNote();
	bool auto_note = false;
	if (note <= 0)
	{
		note = 1;
		std::cout << "Вы ввели неверное значение. Запись будет создана автоматически!\n";
		auto_note = true;
	}
	Film *film = new Film[note];
	if (auto_note)
	{
		*film = { "Film_title", "Director", "Rating" , 0, 0 };
	}
	else
	{
		std::cin.ignore();
		film = initAllNote(film, note);
	}
	
	bool exit_menu = true;
	do
	{
		std::cout << "Меню:\n";
		std::cout << "0 - выход из программы\n";
		std::cout << "1 - поиск по названию\n";
		std::cout << "2 - поиск по жанру\n";
		std::cout << "3 - поиск по режиссеру\n";
		std::cout << "4 - самый популярный фильм в жанре\n";
		std::cout << "5 - добавить запись\n";
		std::cout << "6 - показать все записи\n\n";

		int button = _getch();
		switch (button)
		{
		case EXIT:
			exit_menu = false;
			break;
		case NAME_SEARCH:
			nameSearch(film, note);
			std::cout << std::endl;
			break;
		case SEARCH_BY_GENRE:
			searchByGenre(film, note);
			std::cout << std::endl;
			break;
		case SEARCH_BY_DIRECTOR:
			searchByDirector(film, note);
			std::cout << std::endl;
			break;
		case THE_MOST_POPULAR:
			theMostPopular(film, note);
			std::cout << std::endl;
			break;
		case ADD_A_NOTE:
			if (auto_note)
			{
				std::cin.ignore();
				film = copyANote(film, note);
				auto_note = false;
			}
			else
			{
				film = addANote(film, note);
			}
			break;
		case SHOW_ALL_ENTRIES:
			if (note == 0)
			{
				std::cout << "Записей нет!\n";
			}
			else
			{
				showAllEntries(film, note);
			}
			std::cout << std::endl;
			break;
		default:
			std::cout << "Ошибка! Попробуйте еще раз!\n";
			break;
		}
	} while (exit_menu);

	delete[]film;
	std::cout << "Всего записей: " << note;

	return 0;
}