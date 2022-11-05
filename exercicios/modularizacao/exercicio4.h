void romano(int numero){
    
    string romanos[10] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
    if(numero < 1 || numero > 10)
    cout << "NUMERO INVALIDO!\n";
    else
    cout << romanos[numero - 1];
    
}