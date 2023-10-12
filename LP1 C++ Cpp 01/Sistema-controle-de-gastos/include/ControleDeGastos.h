#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"

#include <vector>


class ControleDeGastos
{
    public:
        ControleDeGastos();

        void setDespesa(const Despesa& d, int pos);
         Despesa getDespesa(int pos) const;
        float calculaTotalDeDespesas() const;
        float calculaTotalDeDespesas(const std::string& tipo) const;
        bool existeDespesaDoTipo(const std::string& tipo) const;


    protected:

    private:
        std::vector <Despesa> despesas;
};

#endif // CONTROLEDEGASTOS_H
