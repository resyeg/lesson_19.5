// lesson_19.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Animal 
{
public:
    
    virtual void Voice()
    {
        std::cout << "What does the fox Say?"<<"\n";
    }
    virtual ~Animal(){}
};

class Cat : public Animal
{

public:
    void Voice () override
    {
        std::cout << "Cat say: May May Nigga!"<<"\n";
    }
    ~Cat(){}
};

class Sparrow : public Animal
{

public:
    void Voice() override
    {
        std::cout << "Sparrow say: Captain Sparrow" << "\n";
    }
    ~Sparrow(){}
};

class Goat : public Animal
{

public:
    void Voice() override
    {
        std::cout << "Goat say: AAAAAAAAAAAA-A-A-A-AAAAAA!" << "\n";
    }
    ~Goat(){}
};

int main()
{
    const int Classcount = 4;

    Animal* p0 = new Animal;
    Animal* p1 = new Cat;
    Animal* p2 = new Sparrow;
    Animal* p3 = new Goat;

    Animal** zoopark = new Animal * [Classcount] {p0, p1, p2, p3};

    for (int i = 0; i <= Classcount; i++)
    {
        zoopark[i]->Voice();
    }
    delete p0, p1, p2, p3;
    delete[] zoopark;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
