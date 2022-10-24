import Data.Char
-- Bruno Mundim Franco Rocha Gonçalves 12121BSI246

-- Exercicio 1
-- (a)

numof :: Char -> String -> Int
numof carac phrase = length (filter (== carac) phrase)

-- (b)
ellen :: [String] -> [Int]
ellen = map length

-- (c)
ssp :: [Int] -> Int
ssp list = foldr (+) 0 (map (^2) (filter (>0) list))

-- Exercicio 2
separa :: String -> (String, String)
separa string =
  (filter (\x -> isAsciiLower x || isAsciiUpper x) string, 
  filter isDigit string)

-- Exercicio 3
-- (a)
const :: a -> b -> a
const a b = a
-- Essa função retorna uma constante, que no caso é o primeiro valor informado

-- (b)
swap :: (a, b) -> (b, a)
swap (x,y) = (y,x)
--Essa função inverte a ordem de uma tupla

-- (c)
apply :: (a -> b) -> a -> b
apply f x = f x
-- Essa função recebe uma função e um valor e retorna o resultado da função aplicada ao valor

-- (d)
flip :: (a -> b -> c) -> b -> a -> c
flip f x y = f y x
-- Essa função recebe uma função e dois valorres e retorna o resultado da função aplicada aos valores na ordem inversa

-- Exercício 4

data Produto = Prod {
  nome :: String,
  qtd :: Float,
  preco :: Float
}

calcularTotal :: [Produto] -> Float
calcularTotal [] = 0
calcularTotal ((Prod _ q p) : as) = (q*p) + calcularTotal as