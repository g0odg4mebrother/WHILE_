
#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    
    using namespace std;

    int otvet;

    cout << "otvet";
    cin >> otvet;

    if(otvet == 1)

    { 

    string answer;
    int a,number = 0;
    
    cout << "(пожалуйста, укажите метод построения таблицы) \n / gorizont\n / fertical"<< endl;
    cin >> answer;
    cout << "введите количество символов"<< endl;
    cin >> a;


    
    if (answer == "gorizont")
    {
        while (number < a)
        {
            number++;
            cout << "\n" << number << "\n";
        }
    }

    else if (answer == "fertical");
    {
        while (number < a)
        {
            number++;
            cout << number << ",";
        }

    }

}
    else if (otvet == 2)
    {
        int start, end, sum = 0;

    cout << "Введите начальное число диапазона: ";
    cin >> start;

    cout << "Введите конечное число диапазона: ";
    cin >> end;


    if (start >= end) {
        cout << "Неверный ввод: начальное число должно быть меньше конечного.\n";
        return 1;
    }

    int i = start;

    while (i <= end) {

        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }

    cout << "Сумма всех нечетных чисел в диапазоне: " << sum << endl;

}


    else if (otvet == 3)
    { 
    int n;
    int i = 1;

    cout << "Введите натуральное число n: ";
    cin >> n;

    if (n < 0) 
    {
        cout << "Факториал не определен для отрицательных чисел." << endl;
        return 1;
    }


    long long factorial = 1;
    
    while (i <= n) 
    {
        factorial *= i;
        i++;
    }

    cout << "Факториал " << n << "! равен " << factorial << endl;


    }



    else if (otvet == 4)
    {
        int count = 0;
        
        int L, P;

        cout << "Введите длину ткани (L): ";
        cin >> L;

        cout << "Введите длину подушки (P): ";
        cin >> P;

        int remainingLength = L;
        while (remainingLength >= P) {
            remainingLength -= P;
            count++; 
        }

        cout << "Швея сможет пошить " << count << " подушек." << endl;

    }


    else if (otvet == 5)
    {
        int N; 
        int count = 0; 

        cout << "Введите количество ящиков на складе: ";
        cin >> N;

            while (N > 0) {
                int taken;
                cout << "Введите количество ящиков, забираемых машиной: ";
                cin >> taken;

                if (taken > N)
                {
                    cout << "Ошибка: машина пытается забрать больше ящиков, чем есть на складе.\n";
                    break;
                }
                else
                {
                    N -= taken;
                    count++;
                }
            }
        
        cout << "К складу подъехало " << count << " машин.\n";

    }



    else if (otvet == 6)
    {

        int sum = 0;

        for (int i = 1; i <= 5; ++i) {
            sum += i;
        }

        std::cout << "Сумма чисел от 1 до 5: " << sum << std::endl;

        return 0;


    }


    else if (otvet == 7)


    {

        int i = 0;

        while (i < 5) 
        {
            std::cout << "*";
            i++;
        }

        cout << std::endl;
    }


return 0;
}












