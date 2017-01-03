import Control.Monad

main :: IO ()
main = do
    n <- readLn
    print n
    replicateM_ n (putStrLn "1")
