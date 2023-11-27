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


   std::cout << "����� ���������� � �������� ���������" << std::endl;

   while (raceState == 1) {
      typeOfRace = 0;
      distance = 0;
      transportCounter = 0;
      std::string registrationTypes = " ";
      double* result = new double[7];
      int index = 0;
      registration = 1;

      while (!(typeOfRace > 0 && typeOfRace < 4)) {
         std::cout << "\n1. ����� ��� ��������� ����������" << std::endl;
         std::cout << "2. ����� ��� ���������� ����������" << std::endl;
         std::cout << "3. ����� ��� ��������� � ���������� ����������" << std::endl;
         std::cout << "�������� ��� �����: ";
         std::cin >> typeOfRace;
      }

      while (distance < 1) {
         std::cout << "\n������� ����� ��������� (������ ���� ������������): ";
         std::cin >> distance;
      }

      if (transportCounter < 2) {
         std::cout << "\n������ ���� ���������������� ���� �� 2 ������������ ��������" << std::endl;
      }

      while (registration == 1 || registration == 2) {
         std::cout << "\n1. ���������������� ���������" << std::endl;
         if (transportCounter > 1) {
            std::cout << "2. ������ �����" << std::endl;
         }
         std::cout << "�������� ��������: ";
         std::cin >> registration;

         if (registration == 2) {
            registration = 3;
            break;
         }

         while (registration == 1) {

            switch (typeOfRace)
            {
            case 1:
               std::cout << "\n����� ��� ��������� ����������. ����������: " << distance << std::endl;
               break;
            case 2:
               std::cout << "\n����� ��� ���������� ����������. ����������: " << distance << std::endl;
               break;
            case 3:
               std::cout << "\n����� ��� ��������� � ���������� ����������. ����������: " << distance << std::endl;
               break;
            }

            if (transportCounter > 0) {
               std::cout << "������������������ ������������ ��������: " << registrationTypes << std::endl;
            }


            std::cout << "1. �������-���������" << std::endl;
            std::cout << "2. �����" << std::endl;
            std::cout << "3. �������" << std::endl;
            std::cout << "4. �������" << std::endl;
            std::cout << "5. ���" << std::endl;
            std::cout << "6. �������-���������" << std::endl;
            std::cout << "7. ����-������" << std::endl;
            std::cout << "0. ��������� �����������" << std::endl;
            std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
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
                  std::cout << "\n������� ���������������� ������������ ��� ������������� ��������" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::BootsOfSpeed* boots = new TransportLib::BootsOfSpeed;
               result[index] = boots->getResult(distance);
               delete boots;
               registrationTypes += "�������-���������";
               index++;
               std::cout << "�������-��������� ������� ����������������" << std::endl;
               break;
            }
            case 2:
            {
               if (typeOfRace == 1) {
                  std::cout << "\n������� ���������������� ������������ ��� ������������� ��������" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::Broom* broom = new TransportLib::Broom;
               result[index] = broom->getResult(distance);
               delete broom;
               registrationTypes += "�����";
               index++;
               std::cout << "����� ������� ����������������" << std::endl;
               break;
            }
            case 3:
            {
               if (typeOfRace == 2) {
                  std::cout << "\n������� ���������������� ������������ ��� ������������� ��������" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::Camel* camel = new TransportLib::Camel;
               result[index] = camel->getResult(distance);
               delete camel;
               registrationTypes += "�������";
               index++;
               std::cout << "������� ������� ���������������" << std::endl;
               break;
            }
            case 4:
            {
               if (typeOfRace == 2) {
                  std::cout << "\n������� ���������������� ������������ ��� ������������� ��������" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::Centaur* centaur = new TransportLib::Centaur;
               result[index] = centaur->getResult(distance);
               delete centaur;
               registrationTypes += "�������";
               index++;
               std::cout << "������� ������� ���������������" << std::endl;
               break;
            }
            case 5:
            {
               if (typeOfRace == 1) {
                  std::cout << "\n������� ���������������� ������������ ��� ������������� ��������" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::Eagle* eagle = new TransportLib::Eagle;
               result[index] = eagle->getResult(distance);
               delete eagle;
               registrationTypes += "���";
               index++;
               std::cout << "��� ������� ���������������" << std::endl;
               break;
            }
            case 6:
            {
               if (typeOfRace == 2) {
                  std::cout << "\n������� ���������������� ������������ ��� ������������� ��������" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::FastCamel* fastCamel = new TransportLib::FastCamel;
               result[index] = fastCamel->getResult(distance);
               delete fastCamel;
               registrationTypes += "�������-���������";
               index++;
               std::cout << "�������-��������� ������� ���������������" << std::endl;
               break;
            }
            case 7:
            {
               if (typeOfRace == 1) {
                  std::cout << "\n������� ���������������� ������������ ��� ������������� ��������" << std::endl;
                  break;
               }
               if (transportCounter >= 1) {
                  registrationTypes += ", ";
               }
               transportCounter++;
               TransportLib::FlyCarpet* flyCarpet = new TransportLib::FlyCarpet;
               result[index] = flyCarpet->getResult(distance);
               delete flyCarpet;
               registrationTypes += "����-������";
               index++;
               std::cout << "����-������ ������� ���������������" << std::endl;
               break;
            }
            default:
               break;
            }
         }

      }

      for (int i = 1; i < index + 1; i++) {
         std::cout << "\n" << i << ". " << "�����: " << result[i - 1] << std::endl;
      }

      delete[] result;

      std::cout << "\n1. �������� ��� ���� �����" << std::endl;
      std::cout << "2. �����" << std::endl;
      std::cout << "�������� ��������: ";
      std::cin >> raceState;

      if (raceState == 1) {
         continue;
      }
      else {
         return 0;
      }
   }
}