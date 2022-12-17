vet=[],[],[],[],[],[],[],[],[],[],[],[],[],[],[]

for l in 0..14
        puts "digite os valores do no vetor[#{l}]"
        vet [l] = gets.chomp.to_i
        puts vet [l]
    
end

c = 0

for l in 0..14
    if (vet [l] == 30)
        puts "A posição igual a 30 é: #{l}"
        c= c + 1
    end
end

puts "A quantidade de números iguais a 30 é: #{c}"