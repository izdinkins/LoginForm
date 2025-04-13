# loginForm

A simple C++ command-line based login system that allows users to **Sign Up**, **Log In**, and **Recover Passwords**. User credentials are securely (but not encrypted) stored in a local file using basic file I/O.

## 🚀 Features

- 🔑 **Login** using a username and password
- 📝 **Sign-Up** to register a new account with username, email, and password
- 🔐 **Forgot Password** functionality using username and email
- 💾 Stores credentials in a text file (`loginData.txt`) with basic formatting

## 🧠 How It Works

1. Users are shown a main menu with the following options:
    - `1` - Login
    - `2` - Sign-Up
    - `3` - Forgot Password
    - `4` - Exit
2. On signup, the system collects and stores user data.
3. On login, the system validates input against saved credentials.
4. If the password is forgotten, the user can retrieve it using their email and username.

## 🛠 Technologies Used

- **C++**
- **File I/O** (`fstream`)
- **Standard Input/Output**

## 📂 File Structure

loginform/ │ ├── loginData.txt # Stores user credentials ├── main.cpp # Source code for the login system └── README.md # Documentation

bash
Copy
Edit

## ▶️ How to Run

1. **Clone the Repository**
   ```bash
   git clone https://github.com/yourusername/loginform.git
   cd loginform
Compile the Program

bash
Copy
Edit
g++ main.cpp -o loginform
Run the Application

bash
Copy
Edit
./loginform
⚠️ Disclaimer
This project is for educational purposes only. User credentials are stored as plain text in a file, making it insecure for real-world applications.

✅ Future Improvements
Implement password hashing (e.g., SHA256)

Add input validation and formatting

Prevent duplicate usernames or emails

Switch to a more secure storage option (e.g., encrypted file or database)

Create a GUI version using libraries like Qt or JavaFX

👤 Author
Created by Imani Dinkins

yaml
Copy
Edit

---

Let me know if you’d like a `.gitignore` or want help uploading it to GitHub!
