#include <iostream>
#include "framework.h"

//----------------------------------------------------------------------------------------------------

int main()
{
   setlocale(LC_ALL, "Russian");

   int transportType;
   int raceState = 1;
   int typeOfRace;
   int distance;
   int transportCounter;
   int registration;
   int ready = 1;


   std::cout << "Добро пожаловать в гоночный симулятор" << std::endl;

   while (raceState == 1) {
      typeOfRace = 0;
      distance = 0;
      transportCounter = 0;
      std::string registrationTypes = " ";
      double* result = new double[7];
      int index = 0;
      registration = 1;

      while (!(typeOfRace > 0 && typeOfRace < 4)) {
         std::cout << "\n1. Гонка для наземного транспорта" << std::endl;
         std::cout << "2. Гонка для воздушного транспорта" << std::endl;
         std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
         std::cout << "Выберите тип гонки: ";
         std::cin >> typeOfRace;
      }

      while (distance < 1) {
         std::cout << "\nУкажите длину дистанции (должна быть положительна): ";
         std::cin >> distance;
      }

      if (transportCounter < 2) {
         std::cout << "\nДолжно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl;
      }

      while (registration == 1 || registration == 2) {
         std::cout << "\n1. Зарегистрировать транспорт" << std::endl;
         if (transportCounter > 1) {
            std::cout << "2. Начать гонку" << std::endl;
         }
         std::cout << "Выберете действие: ";
         std::cin >> registration;

         if (registration == 2) {
            registration = 3;
            break;
         }

         while (registration == 1) {

            switch (typeOfRace)
            {
            case 1:
               std::cout << "\nГонка для наземного транспорта. Расстояние: " << distance << std::endl;
               break;
            case 2:
               std::cout << "\nГонка для воздушного транспорта. Расстояние: " << distance << std::endl;
               break;
            case 3:
               std::cout << "\nГонка для наземного и воздушного транспорта. Расстояние: " << distance << std::endl;
               break;
            }

            if (transportCounter > 0) {
               std::cout << "Зарегистрированные транспортные средства: " << registrationTypes << std::endl;
            }


            std::cout << "1. Ботинки-Вездеходы" << std::endl;
            std::cout << "2. Метла" << std::endl;
            std::cout << "3. Верблюд" << std::endl;
            std::cout << "4. Кентавр" << std::endl;
            std::cout << "5. Орёл" << std::endl;
            std::cout << "6. Верблюд-быстроход" << std::endl;
            std::cout << "7. Ковёр-самолёт" << std::endl;
            std::cout << "0. Закончить регистрацию" << std::endl;
            std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
            std::cin >> transportType;


            switch (transportType)
            {
            case 0:
            {
               registration = 2;
               break;
            }
            case 1:
            {
               if (typeOfRace == 2) {
                  std::cout << "\nПопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::BootsOfSpeed* boots = new TransportLib::BootsOfSpeed;
               result[index] = boots->getResult(distance);
               delete boots;
               registrationTypes += "Ботинки-Вездеходы";
               index++;
               std::cout << "Ботинки-Вездеходы успешно зарегистрированы" << std::endl;
               break;
            }
            case 2:
            {
               if (typeOfRace == 1) {
                  std::cout << "\nПопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::Broom* broom = new TransportLib::Broom;
               result[index] = broom->getResult(distance);
               delete broom;
               registrationTypes += "Метла";
               index++;
               std::cout << "Метла успешно зарегистрирована" << std::endl;
               break;
            }
            case 3:
            {
               if (typeOfRace == 2) {
                  std::cout << "\nПопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::Camel* camel = new TransportLib::Camel;
               result[index] = camel->getResult(distance);
               delete camel;
               registrationTypes += "Верблюд";
               index++;
               std::cout << "Верблюд успешно зарегистрирован" << std::endl;
               break;
            }
            case 4:
            {
               if (typeOfRace == 2) {
                  std::cout << "\nПопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::Centaur* centaur = new TransportLib::Centaur;
               result[index] = centaur->getResult(distance);
               delete centaur;
               registrationTypes += "Кентавр";
               index++;
               std::cout << "Кентавр успешно зарегистрирован" << std::endl;
               break;
            }
            case 5:
            {
               if (typeOfRace == 1) {
                  std::cout << "\nПопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::Eagle* eagle = new TransportLib::Eagle;
               result[index] = eagle->getResult(distance);
               delete eagle;
               registrationTypes += "Орёл";
               index++;
               std::cout << "Орёл успешно зарегистрирован" << std::endl;
               break;
            }
            case 6:
            {
               if (typeOfRace == 2) {
                  std::cout << "\nПопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::FastCamel* fastCamel = new TransportLib::FastCamel;
               result[index] = fastCamel->getResult(distance);
               delete fastCamel;
               registrationTypes += "Верблюд-быстроход";
               index++;
               std::cout << "Верблюд-быстроход успешно зарегистрирован" << std::endl;
               break;
            }
            case 7:
            {
               if (typeOfRace == 1) {
                  std::cout << "\nПопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::FlyCarpet* flyCarpet = new TransportLib::FlyCarpet;
               result[index] = flyCarpet->getResult(distance);
               delete flyCarpet;
               registrationTypes += "Ковёр-самолёт";
               index++;
               std::cout << "Ковёр-самолёт успешно зарегистрирован" << std::endl;
               break;
            }
            default:
               break;
            }
         }

      }

      for (int i = 1; i < index + 1; i++) {
         std::cout << "\n" << i << ". " << "Время: " << result[i - 1] << std::endl;
      }

      delete[] result;

      std::cout << "\n1. Провести ещё одну гонку" << std::endl;
      std::cout << "2. Выйти" << std::endl;
      std::cout << "Выберите действие: ";
      std::cin >> raceState;

      if (raceState == 1) {
         continue;
      }
      else {
         return 0;
      }
   }
}