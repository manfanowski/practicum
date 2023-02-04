// Вычислите и выведите площадь треугольника со сторонами a, b, c
double p = (a + b + c) / 2;
double s = sqrt(p * (p - a) * (p - b) * (p - c));
cout << "S = "s << s << endl;
