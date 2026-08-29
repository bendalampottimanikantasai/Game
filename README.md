# Rock Paper Scissors Game (C++)

A simple command-line **Rock, Paper, Scissors** game written in C++, where you play against the computer.

## 🎮 Features

- Play multiple rounds against a computer opponent with randomized choices
- Clean win/lose/tie logic
- Option to keep playing until you choose to quit

## 🛠️ How It Works

- The player picks a choice: `0` for Rock, `1` for Paper, `2` for Scissors
- The computer randomly generates its choice using `rand()`
- The game compares both choices and declares the winner based on classic Rock-Paper-Scissors rules
- After each round, the player can choose to play again (`y`) or stop (`n`)

## 📥 Prerequisites

- A C++ compiler (e.g., `g++`)

## ▶️ How to Run

1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/your-repo-name.git
   cd your-repo-name
   ```

2. Compile the code:
   ```bash
   g++ rock_paper_scissors.cpp -o rps
   ```

3. Run the executable:
   ```bash
   ./rps
   ```

## 🕹️ Sample Gameplay

```
enter player choice
0.rock
1.paper
2.scissor
1
your choice paper
computer choicerock
player win
playagain y or n
n
thanku for playing game
```

## 📌 Choice Reference

| Input | Choice   |
|-------|----------|
| 0     | Rock     |
| 1     | Paper    |
| 2     | Scissors |

## 🚧 Known Issues / Possible Improvements

- The invalid input check `if(player < 0 && player > 2)` never triggers (should be `||` instead of `&&`), so out-of-range inputs currently aren't caught properly
- Minor spacing fix needed in the output: `"computer choice"` should be `"computer choice: "`
- Could add score tracking across rounds
- Could add input validation loop instead of `continue`

## 📄 License

This project is open-source and free to use for learning purposes.
