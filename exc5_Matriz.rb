
mat=[[],[]]

for l in 0..1
    for c in 0..2
        puts "digite o valor para matriz[#{l}] [#{c}]"
        mat [l][c] = gets.chomp.to_i
        puts mat [l][c]
    end
end

puts "====================="
puts "Encontrando intervalo"

sim = 0
nao = 0

for l in 0..1
    for c in 0..2
        intervalo = 0

        if (mat[l][c]>= 5 and mat[l][c] <= 15)
            puts "Notas [#{l}|#{c}]: #{mat[l][c]}"
            puts "Esse numero se encontra no intervalo de 5 e 15"
            sim = sim + 1
        else
            puts "Esse numero nao se encontra no intervalo de 5 e 15"

            nao = nao + 1
        end

        puts "Notas [#{l}|#{c}]: #{mat[l][c]}"

    end
end

puts "======================================================================="
puts "Temos #{sim} numeros que se encontram no intervalo de 5 até 15"
puts "Temos #{nao} numeros que não se encontram no intervalo de 5 até 15"
