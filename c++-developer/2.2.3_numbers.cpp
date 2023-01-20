string text = "Remaining plywood: "s;

wood_balance -= 2 * (w1 * h1 + d1 * h1) + w1 * d1;
cout << text << wood_balance << endl;

wood_balance -= 2 * (w2 * h2 + d2 * h2) + w2 * d2; 
cout << text << wood_balance << endl;

wood_balance -= 2 * (w3 * h3 + d3 * h3) + w3 * d3;
cout << text << wood_balance << endl;
