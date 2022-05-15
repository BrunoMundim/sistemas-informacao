module Print3 where

myGreetings :: String
myGreetings = "hello" ++ " world!"

hello :: [Char]
hello = "Hello"

world :: String
world = "World!"

main :: IO ()
main = do
  putStrLn myGreetings
  putStrLn secondGreetings
  where secondGreetings = 
          concat [hello, " ", world]