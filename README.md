# 🛰️ minitalk - Signal-Based Communication

## 📖 Overview
`minitalk` is a simple client-server communication project developed for the 42 curriculum.  
It demonstrates inter-process communication (IPC) in Unix by sending data using signals only (`SIGUSR1` and `SIGUSR2`).

## ⚡ Features
- Transmits messages from a client to a server using Unix signals
- Encodes characters bit by bit using `SIGUSR1` and `SIGUSR2`
- Server reconstructs and prints the full message
- Handles message reception asynchronously
- Includes basic error checking and confirmation signals

## 🛠️ Technologies
- **Language**: C
- **System**: Unix/Linux
- **APIs used**: `kill`, `signal`, `sigaction`, `pause`, `usleep`

## 📦 Installation
```bash
git clone https://github.com/Yekanat/minitalk.git
cd minitalk
make
