function GreatestCommonSubstring(X, Y)
    m = X.length
    n = Y.length
    table[1->m, 1->n]
    for i = 1->m
        for j = 1->n
            if X[i] == Y[j]
                if i == 1 or j == 1
                    table[i,j] = 1
                else 
                    table[i, j] = table[i-1, j-1] + 1
            else 
                table[i, j] = 0


    result  = -1
    a, b = 0
    for a = 0 -> m
        for b = 0 -> n
                if table[a, b] > result
                    result = table[a,b]
                    break
    
    for k = result->0
        print X[a-result]
