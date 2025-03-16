# RSA Encryption

This project implements the **RSA encryption algorithm** in C++. It includes functions for key generation, encryption, and decryption using modular arithmetic.

## Features
- Prime number generation using the **Sieve of Eratosthenes**.
- Key pair generation (**public and private keys**).
- Message encryption and decryption.
- Fast modular exponentiation for efficiency.

## Installation
### Prerequisites
Ensure you have **G++ (GNU Compiler Collection)** installed. If not, install it with:

#### On Linux (Debian-based):
```sh
sudo apt update && sudo apt install g++
```

#### On Windows:
Use **MinGW** or **WSL (Windows Subsystem for Linux)**.

### Clone the Repository
```sh
git clone https://github.com/your-username/rsa-encryption.git
cd rsa-encryption
```

### Compile the Code
```sh
g++ main.cpp rsa.cpp -o rsa
```

## Usage
Run the program:
```sh
./rsa
```
### Example Execution
```
Enter a numeric message to encrypt: 12345
Encrypted message: 67890
Decrypted message: 12345
```

## File Structure
```
├── main.cpp        # Main file that uses RSA functions
├── rsa.cpp         # Implementation of RSA functions
├── rsa.h           # Header file
├── README.md       # Project documentation
└── Makefile        # (Optional) Build automation
```

## Contributing
Feel free to fork this repository and contribute! You can:
- Improve efficiency
- Add error handling
- Extend the key size for stronger encryption

