programa {
  funcao inicio() {
    cadeia macas
    real preco, total
    inteiro quant

    escreva("Digite a quantidade de ma��s compradas: ")
    leia(quant)

    se (quant < 12){
      preco = 1.30
    }
    se (quant >= 12){
      preco = 1.00
    }

    total = quant * preco

    escreva("==============")
    escreva("\nQuantidade de Ma��s: ", quant)
    escreva("\nTotal a pagar: ", total)
  }
}
