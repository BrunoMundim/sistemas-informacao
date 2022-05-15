module FunctionWithWhere where

printInc n = print plusOne
  where plusOne = n + 1

printInc2 n = let plusTwo = n + 2
              in print plusTwo

mult1     = x * y
  where x = 5
        y = 6

exerc1 = x * 3 + y
  where x = 3
        y = 1000

exerc2 = x * 5
  where y = 10
        x = 10 * 5 + y

exerc3 = z / x + y
  where x = 7
        y = negate x
        z = y * 10

waxOn = x * 5
  where x = 225

triple n = n * 3

waxOff x = triple x `div` 10