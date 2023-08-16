const readline = require('readline');

// Function to get a random choice (rock, paper, or scissors) for the computer
function getComputerChoice() {
  const choices = ['rock', 'paper', 'scissors'];
  const randomIndex = Math.floor(Math.random() * choices.length);
  return choices[randomIndex];
}

// Function to determine the winner between the player and the computer
function determineWinner(playerChoice, computerChoice) {
  if (playerChoice === computerChoice) {
    return "It's a tie!";
  } else if (
    (playerChoice === 'rock' && computerChoice === 'scissors') ||
    (playerChoice === 'paper' && computerChoice === 'rock') ||
    (playerChoice === 'scissors' && computerChoice === 'paper')
  ) {
    return 'You win!';
  } else {
    return 'Computer wins!';
  }
}

// Function to play the game
function playGame(playerChoice) {
  const computerChoice = getComputerChoice();
  console.log(`You chose: ${playerChoice}`);
  console.log(`Computer chose: ${computerChoice}`);
  console.log(determineWinner(playerChoice, computerChoice));
  console.log();

  // Ask the user if they want to play again
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
  });

  rl.question('Do you want to play again? (yes or no): ', (answer) => {
    rl.close();
    if (answer.toLowerCase() === 'yes') {
      startGame(); // Restart the game
    } else {
      console.log('Thanks for playing. Goodbye!');
    }
  });
}

// Function to start the game and ask for the user's choice
function startGame() {
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
  });

  rl.question('Enter your choice (rock, paper, or scissors): ', (playerChoice) => {
    rl.close();
    const validChoices = ['rock', 'paper', 'scissors'];
    if (!validChoices.includes(playerChoice)) {
      console.log('Invalid choice. Please choose either rock, paper, or scissors.');
      startGame(); // Ask again for the choice
      return;
    }

    playGame(playerChoice);
  });
}

// Start the game for the first time
startGame();
