mat=[[]]
vet= [],[],[],[],[]

for l in 0..1
    for c in 0..1
        puts "digite o valor para matriz[#{l}] [#{c}]"
        mat [l][c] = gets.chomp.to_i
        
    end
end



def conta1
    return 

    k = 0.0 
    for l in 0..1
        for c in 0..1

            vet[k] = mat[l][c]
            puts vet[k]
            k= k+1
           
            
        end
    end
    