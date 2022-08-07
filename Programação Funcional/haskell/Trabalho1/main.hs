module Main (main) where
import System.IO
main :: IO()
main = do
  hSetBuffering stdout NoBuffering
  putStrLn "==========================================="
  putStrLn " Banco Bruno Mundim Franco Rocha Goncalves"
  putStrLn "==========================================="
  putStrLn "Opcoes:"
  putStrLn "1. Saldo"
  putStrLn "2. Extrato"
  putStrLn "3. Deposito"
  putStrLn "4. Saque"
  putStrLn "5. Fim"
  putStr "\n"
  putStr "Escolha uma opcao: "
  opcao <- readLn
  case opcao of
    1 -> do {
      putStr "Seu saldo eh: R$ ";
      imprime "saldo.txt";
      putStrLn "\n";
      main;
    }
    2 -> do {
        putStrLn "Extrato: ";
        imprime "extrato.txt";
        putStrLn "\n";
        main;
      }
    3 -> do {
        putStr "Digite o valor a ser depositado: ";
        valorDeposito <- readLn;
        deposito valorDeposito;
        main;
      }
    4 -> do {
        putStrLn "Digite o valor a ser sacado: ";
        valorSaque <- readLn;
        saque valorSaque;
        main;
      }
    5 -> putStrLn "Agradecemos sua preferencia!"
    _ -> main


imprime :: String -> IO()
imprime path = do
    dados <- readFile path
    putStr dados

deposito :: Float -> IO()
deposito valorDeposito = do
    saldoFile <- openFile "saldo.txt" ReadMode
    saldoAtual <- hGetLine saldoFile
    hClose saldoFile

    let novoSaldo = read saldoAtual + valorDeposito

    saldoFile <- openFile "saldo.txt" WriteMode
    hPutStr saldoFile (show novoSaldo)
    hClose saldoFile

    saldoAtualizado <- readFile "saldo.txt"
    putStrLn ("Saldo atualizado: " ++ saldoAtualizado ++ "\n")
    appendFile "extrato.txt" ("\n+" ++ show valorDeposito ++ "\n")

saque :: Float -> IO()
saque valorSaque = do
    saldoFile <- openFile "saldo.txt" ReadMode
    saldoAtual <- hGetLine saldoFile
    hClose saldoFile

    let novoSaldo = read saldoAtual - valorSaque

    saldoFile <- openFile "saldo.txt" WriteMode
    hPutStr saldoFile (show novoSaldo)
    hClose saldoFile

    saldoAtualizado <- readFile "saldo.txt"
    putStrLn ("Saldo atualizado: " ++ saldoAtualizado ++ "\n")
    appendFile "extrato.txt" ("\n-" ++ show valorSaque ++ "\n")