puts "Escreva valor de ang: "
ang = gets.chomp.to_f
puts "Escreva o valor de alt: "
alt = gets.chomp.to_f

radiano = (ang * 3.14) / 180
seno = Math.sin (radiano)

escada = alt / seno

#arredondar VARIAVEL.ceil(2) - VARIAVEL.round()
puts "Escada: #{escada}"