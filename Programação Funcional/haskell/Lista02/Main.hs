-- Exercício 1

-- (a)
ordena2 :: Int -> Int -> (Int, Int)
ordena2 a b = 
  if a < b then (a, b) else (b, a)

-- (b)
ordena2Guardas :: Int -> Int -> (Int, Int)
ordena2Guardas a b
  | a < b = (a, b)
  | otherwise = (b, a)

-- Exercício 2
mes :: Int -> String
mes a 
  | a == 1 = "Janeiro"
  | a == 2 = "Fevereiro"
  | a == 3 = "Marco"
  | a == 4 = "Abril"
  | a == 5 = "Maio"
  | a == 6 = "Junho"
  | a == 7 = "Julho"
  | a == 8 = "Agosto"
  | a == 9 = "Setembro"
  | a == 10 = "Outubro"
  | a == 11 = "Novembro"
  | a == 12 = "Dezembro"
  | otherwise = "Erro!"

mesCase :: Int -> String
mesCase a = case a of
  1 -> "Janeiro"
  2 -> "Fevereiro"
  3 -> "Marco"
  4 -> "Abril"
  5 -> "Maio"
  6 -> "Junho"
  7 -> "Julho"
  8 -> "Agosto"
  9 -> "Setembro"
  10 -> "Outubro"
  11 -> "Novembro"
  12 -> "Dezembro"
  _ -> "Erro!"

-- É possível usar if then else, porém acarretaria em um código ilegível ou de difícil compreensão, por isso nesse caso o ideal é o formato case of

-- Exercício 3
formaTriangulo :: Float -> Float -> Float -> String
formaTriangulo a b c
  | a <= 0 || b <= 0 || c <= 0 = "Nao forma triangulo"
  | (a + b) < c || (a + c) < b || (b + c) < a = "Nao forma triangulo"
  | a == b && b == c = "Equilatero"
  | a /= b && a /= c && b /= c = "Escaleno"
  | otherwise = "Isoceles"

-- Exercício 4
somaQuadrados :: Float -> Float -> String
somaQuadrados a b = 
  let x = a*a 
      y = b*b 
      in if x+y > (a+b)*(a+b) 
        then "A soma dos quadrados eh maior"
        else "O quadrado da soma eh maior"

-- Exercício 5
menuAluno :: IO ()
menuAluno = do
  putStr "Digite o nome do aluno: "
  nome <- getLine
  putStr "Digite a matricula do aluno: "
  matricula <- getLine
  putStr "Digite a nota do aluno: "
  nota <- getLine
  putStrLn ("-Nome: " ++ nome ++ " -Matricula: " ++ matricula ++ " -Nota: " ++ nota)
