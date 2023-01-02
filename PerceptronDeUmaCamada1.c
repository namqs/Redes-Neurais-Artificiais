#include <stdio.h>
float Soma (int inputs [3], float pesos [3]);
void StepFunction (int ValorSoma);

void main ()
{
  int Inputs[3] = {1, 7, 5};
  float Pesos[3] = {0.8, 0.1, 0};
  float FuncaoSoma;

  FuncaoSoma = Soma (Inputs, Pesos);
  printf("Este eh o resultado da funcao soma: %.1f", FuncaoSoma);
  StepFunction (FuncaoSoma);


}

float Soma (int inputs [3], float pesos [3]) //Os valores de entrada sao submetidos à funcao soma, sendo multiplicados por seus respectivos pesos.
{
  int i, j;
  float resultado=0;

    for (i=0, j=0; i<3, j<3; i++, j++)
    {
      resultado = resultado + (inputs[i] * pesos [i]);
    }

    return resultado;
}

void StepFunction (int ValorSoma)
{
  if (ValorSoma >= 1)
  {
    printf("\n\nSinapse excitadora! \n");
  }
    else
    {
      printf("\n\nSinapse inibidora. \n");
    }
}
