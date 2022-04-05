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
	EXIT = 48,          // ����� �� ���������
	NAME_SEARCH,        // ����� �� ��������
	SEARCH_BY_GENRE,    // ����� �� �����
	SEARCH_BY_DIRECTOR, // ����� �� ���������
	THE_MOST_POPULAR,   // ����� ���������� ����� � �����
	ADD_A_NOTE,         // �������� ������
	SHOW_ALL_ENTRIES,   // �������� ��� ������
};

// ������ �� ���������� ������� ��� ������ ���������
int inputNumberNote()
{
	std::cout << "������� ������� ������� �� ������ ��������: ";
	int note;
	std::cin >> note;

	return note;
}

// ����� �� �������� ������
void nameSearch(Film *film, int &note)
{
	std::cout << "������� �������� ������: ";
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
	std::cout << "����������: " << match_count << std::endl;
	std::cout << "####################\n";
	for (int i = 0; i < note; i++)
	{
		if (film[i].film_title == title)
		{
			std::cout << "�������� ������: " << film[i].film_title << std::endl;
			std::cout << "��������: " << film[i].director << std::endl;
			std::cout << "����: " << film[i].genre << std::endl;
			std::cout << "�������: " << film[i].popularity_rating << std::endl;
			std::cout << "����: " << film[i].price << std::endl;
			std::cout << "####################\n";
		}
	}
}

// ����� �� �����
void searchByGenre(Film *film, int &note)
{
	std::cout << "������� ���� ������: \n";
	
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
			std::cout << "������ �����! ��������� �������!\n";
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
	std::cout << "����������: " << match_count << std::endl;
	std::cout << "####################\n";
	for (int i = 0; i < note; i++)
	{
		if (film[i].genre == genre)
		{
			std::cout << "�������� ������: " << film[i].film_title << std::endl;
			std::cout << "��������: " << film[i].director << std::endl;
			std::cout << "����: " << film[i].genre << std::endl;
			std::cout << "�������: " << film[i].popularity_rating << std::endl;
			std::cout << "����: " << film[i].price << std::endl;
			std::cout << "####################\n";
		}
	}
}

// ����� �� ���������
void searchByDirector(Film *film, int &note)
{
	std::cout << "������� ���������: ";
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
	std::cout << "����������: " << match_count << std::endl;
	std::cout << "####################\n";
	for (int i = 0; i < note; i++)
	{
		if (film[i].director == director)
		{
			std::cout << "�������� ������: " << film[i].film_title << std::endl;
			std::cout << "��������: " << film[i].director << std::endl;
			std::cout << "����: " << film[i].genre << std::endl;
			std::cout << "�������: " << film[i].popularity_rating << std::endl;
			std::cout << "����: " << film[i].price << std::endl;
			std::cout << "####################\n";
		}
	}
}

// ����� ������ ����������� � �����
void theMostPopular(Film *film, int &note)
{
	std::cout << "������� ���� ������: \n";

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
			std::cout << "������ �����! ��������� �������!\n";
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
	std::cout << "����� ���������� ����� � ����� " << genre << ":\n";
	for (int i = 0; i < note; i++)
	{
		if (the_most_popular == film[i].popularity_rating && film[i].genre == genre)
		{
			std::cout << "�������� ������: " << film[i].film_title << std::endl;
			std::cout << "��������: " << film[i].director << std::endl;
			std::cout << "����: " << film[i].genre << std::endl;
			std::cout << "�������: " << film[i].popularity_rating << std::endl;
			std::cout << "����: " << film[i].price << std::endl;
			std::cout << "####################\n";
		}
	}
}

// ������������� ������
Film *initNote(Film &film)
{
	std::cout << "������� �������� ������: ";
	getline(std::cin, film.film_title);
	std::cout << "������� ���������: ";
	getline(std::cin, film.director);
	std::cout << "�������� ���� ������:\n";
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
			std::cout << "������ �����! ��������� �������!\n";
			break;
		}
	} while (exit_cicle);

	std::cout << "������� �������: ";
	std::cin >> film.popularity_rating;
	std::cout << "������� ����: ";
	std::cin >> film.price;
	std::cin.ignore();
	
	return &film;
}

// ���������� ����� ������
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

// ���������� ������ �� ����� ���������
Film *copyANote(Film *film, int &note)
{
	Film *tmp = new Film[note];
	tmp[note - 1] = *initNote(*film);
	delete[]film;
	return tmp;
}

// ����� ���� �������
void showAllEntries(Film *film, int note)
{
	std::cout << "####################\n";
	for (int i = 0; i < note; i++)
	{
		std::cout << "�������� ������: " << film[i].film_title << std::endl;
		std::cout << "��������: " << film[i].director << std::endl;
		std::cout << "����: " << film[i].genre << std::endl;
		std::cout << "�������: " << film[i].popularity_rating << std::endl;
		std::cout << "����: " << film[i].price << std::endl;
		std::cout << "####################\n";
	}
}

// ������������� ���� ������� ��� ������ ���������
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
		std::cout << "�� ����� �������� ��������. ������ ����� ������� �������������!\n";
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
		std::cout << "����:\n";
		std::cout << "0 - ����� �� ���������\n";
		std::cout << "1 - ����� �� ��������\n";
		std::cout << "2 - ����� �� �����\n";
		std::cout << "3 - ����� �� ���������\n";
		std::cout << "4 - ����� ���������� ����� � �����\n";
		std::cout << "5 - �������� ������\n";
		std::cout << "6 - �������� ��� ������\n\n";

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
				std::cout << "������� ���!\n";
			}
			else
			{
				showAllEntries(film, note);
			}
			std::cout << std::endl;
			break;
		default:
			std::cout << "������! ���������� ��� ���!\n";
			break;
		}
	} while (exit_menu);

	delete[]film;
	std::cout << "����� �������: " << note;

	return 0;
}