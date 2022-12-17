cod = 0 
cont_f = 0
cont_m = 0
sal_l = 0.0 
media_m = 0.0
media_f = 0.0

while cod != 99999
    puts "digite seu codigo: "
    cod = gets.chomp.to_i
    puts "Informe seu Sexo M para Masculino e F para Feminino: "
    sexo = gets.chomp

    puts "Informe o numero de horas aulas dada: "
    num_h = gets.chomp.to_f
    sal_b = num_h * 30

    if sexo == "M" or sexo == "m"
        sal_l = sal_b - (sal_b * 10/100)
        media_m = media_m + sal_l
        cont_m = cont_m + 1
        mediatotalm = media_m / cont_m
        puts "Pessoas do sexo M: #{cont_m}"
        puts "Media Salarial masculina: #{mediatotalm}"
        
    end

    if sexo == "F" or sexo == "f"
        sal_l = sal_b - (sal_b * 10/100)
        media_f = media_f + sal_l
        cont_f = cont_f + 1
        mediatotalf = media_f / cont_f
        puts "Pessoas do sexo F: #{cont_f}"
        puts "Media Salarial feminina: #{mediatotalf}"
        
    end
    
    puts "============================"
    puts "Codigo: #{cod}"
    puts "Salario Bruto: #{sal_b}"
    puts "Salario Liquido: #{sal_l}"
    puts "============================"
  
end
