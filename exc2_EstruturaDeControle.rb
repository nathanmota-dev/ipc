puts "Digite o peso do saco de ração em kilos: "
saco = gets.chomp.to_f
puts "Digite a quantidade em gramas da refeição do primeiro gato: "
gato1 = gets.chop.to_f
puts"Digite a quantidade em gramas da refeição do segundo gato: "
gato2 = gets.chomp.to_f

conversao = saco * 1000
dia = gato1 + gato2
semana = dia * 5
sobra = conversao - semana

#arredondar VARIAVEL.ceil(2) - VARIAVEL.round()
conversao2 = sobra / 1000

puts "Sobra semanal do saco: #{conversao2}"