start C:\Users\iamja\Desktop\krnldrvr - Copy\dsefix.exe
timeout /t 2
sc create JMHG_CSGO_DRIVER binpath=C:\Users\iamja\Desktop\krnldrvr - Copy\JMHG_DRIVER.sys type=kernel
sc start JMHG_CSGO_DRIVER
timeout /t 5
start C:\Users\iamja\Desktop\krnldrvr-copy\dsefix.exe -e
timeout /t 2