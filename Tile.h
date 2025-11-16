#pragma once

using namespace System;
using namespace System::IO;

public ref class Tile
{
public:
    property String^ Name;
    property double Width;
    property double Height;
    property double PricePerM2;

public:
    // 1. конструктор за замовчуванням
    Tile()
    {
        Name = "Невідомо";
        Width = 0.0;
        Height = 0.0;
        PricePerM2 = 0.0;
    }

    // 2. конструктор з параметрами
    Tile(String^ name, double width, double height, double price)
    {
        Name = name;
        Width = width;
        Height = height;
        PricePerM2 = price;
    }

    // 3. конструктор копій
    Tile(Tile^ other)
    {
        Name = other->Name;
        Width = other->Width;
        Height = other->Height;
        PricePerM2 = other->PricePerM2;
    }

    double GetArea() // метод для розрахунку площі однієї плитки в метрах квадратних

    {
        return Width * Height;
    }

    
    double GetPricePerPiece() // метод для розрахунку ціни однієї плитки
    {
        if (GetArea() > 0)
        {
            return GetArea() * PricePerM2;
        }
        return 0.0;
    }


    // 4. Перевизначення операцій << та >> у вигляді методів для файлів

    void SaveToFile(StreamWriter^ sw) // метод для запису даних об'єкта у файл
    {
        sw->WriteLine(Name);
        sw->WriteLine(Width);
        sw->WriteLine(Height);
        sw->WriteLine(PricePerM2);
    }

    void LoadFromFile(StreamReader^ sr) // метод для зчитування даних об'єкта з файлу
    {
        Name = sr->ReadLine();
        Width = Convert::ToDouble(sr->ReadLine());
        Height = Convert::ToDouble(sr->ReadLine());
        PricePerM2 = Convert::ToDouble(sr->ReadLine());
    }
};