struct No
{
    int info;
    No *elo = nullptr;
};

class LUE
{
    No *comeco = nullptr;
    No *fim = nullptr;

    void push(int info)
    {
        No *novoNovo = new No;
        novoNovo->info = info;
        if (this->comeco == nullptr)
        {
            this->comeco = novoNovo;
        }
        else
        {
            this->fim = novoNovo;
        }
    }

    int getInfo(int index){
        
    }
};
