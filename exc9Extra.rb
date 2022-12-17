nomes=[],[],[]
for l in 0..2
    puts "Informe o Nome do aluno[#{l}]"
    nomes [l] = gets.chomp
end

notas=[[],[],[],[]]
for l in 0..2
    for c in 0..3
        puts "Informe as notas do aluno[#{l}] [#{c}]"
        notas [l][c] = gets.chomp.to_f
        
    end
end


for l in 0..2
    sum = 0.0
        for c in 0..3
        sum = sum.to_f + notas [l][c].to_f      
        end
            medias=[],[],[]
            for l in 0..2
                medias [l] = sum.to_f / 4  
            end
    
end

puts "Informe o numero do aluno que deseja a media: "
aluno = gets.chomp.to_i

if 
    (medias[aluno]>=6)
        apr="Aprovado"
    else 
        apr="Reprovado"
end

puts "================"
puts "Aluno: #{nomes[aluno]}"
puts "                "
puts "1B : #{notas[aluno][0]}"
puts "2B : #{notas[aluno][1]}"
puts "3B : #{notas[aluno][2]}"
puts "4B : #{notas[aluno][3]}"
puts "                "
puts "Media: #{medias[aluno]}"
puts apr
puts "================"