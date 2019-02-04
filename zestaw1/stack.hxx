//
// Created by Wojciech on 2019-02-04.
//

#ifndef GORLICH18_STACK_HXX
#define GORLICH18_STACK_HXX

class Stack {
    void push(int x); // Wstawia element x na stos
    int pop();        // Usuwa element ze stosu i zwraca jego wartość
    int& top();       // Zwraca referencję do najmłodszego elementu
    int size();       // Zwraca liczbę elementów na stosie
    bool empty();
};

#endif //GORLICH18_STACK_HXX
