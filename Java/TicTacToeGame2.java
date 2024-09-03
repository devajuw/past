

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class TicTacToeGame2{

    private JFrame frame;
    private JButton[][] buttons; 
    private static final char PLAYER_X = 'X';
    private static final char PLAYER_O = 'O';
    private static final char EMPTY = ' ';

    public TicTacToeGame2() {
        frame = new JFrame("Tic Tac Toe");
        buttons = new JButton[3][3];

        frame.setSize(300, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new GridLayout(3, 3));

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                buttons[i][j] = new JButton("");
                frame.add(buttons[i][j]);
                buttons[i][j].addActionListener(new ActionListener() {
                    @Override
                    public void actionPerformed(ActionEvent e) {
                        JButton clickedButton = (JButton) e.getSource();
                        if (clickedButton.getText().equals("")) {
                            clickedButton.setText(String.valueOf(PLAYER_X));
                            if (checkWin(PLAYER_X)) {
                                endGame("Player " + PLAYER_X + " wins!");
                                return;
                            }
                            if (isBoardFull()) {
                                endGame("The game is a tie!");
                                return;
                            }
                            botMove();
                            if (checkWin(PLAYER_O)) {
                                endGame("Bot wins!");
                            }
                        }
                    }
                });
            }
        }

        frame.setVisible(true);
    }

    private boolean isBoardFull() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (buttons[i][j].getText().charAt(0) == EMPTY) {
                    return false;
                }
            }
        }
        return true;
    }

    private boolean checkWin(char player) {
        for (int i = 0; i < 3; i++) {
            if (buttons[i][0].getText().charAt(0) == player && 
                buttons[i][1].getText().charAt(0) == player && 
                buttons[i][2].getText().charAt(0) == player) {
                return true;
            }
            if (buttons[0][i].getText().charAt(0) == player &&
                buttons[1][i].getText().charAt(0) == player &&
                buttons[2][i].getText().charAt(0) == player) {
                return true;
            }
        }
        if (buttons[0][0].getText().charAt(0) == player &&
            buttons[1][1].getText().charAt(0) == player &&
            buttons[2][2].getText().charAt(0) == player) {
            return true;
        }
        if (buttons[0][2].getText().charAt(0) == player &&
            buttons[1][1].getText().charAt(0) == player &&
            buttons[2][0].getText().charAt(0) == player) {
            return true;
        }
        return false;
    }

    private void endGame(String message) {
        JOptionPane.showMessageDialog(frame, message);
        System.exit(0);
    }

    private void botMove() {
        int bestScore = Integer.MIN_VALUE;
        Point bestMove = new Point(-1, -1);

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (buttons[i][j].getText().equals("")) {
                    buttons[i][j].setText(String.valueOf(PLAYER_O));
                    int score = minimax(false);
                    buttons[i][j].setText("");
                    if (score > bestScore) {
                        bestScore = score;
                        bestMove.x = i;
                        bestMove.y = j;
                    }
                }
            }
        }

        buttons[bestMove.x][bestMove.y].setText(String.valueOf(PLAYER_O));
    }

    private int minimax(boolean isMaximizing) {
        if (checkWin(PLAYER_X)) {
            return -10;
        }
        if (checkWin(PLAYER_O)) {
            return 10;
        }
        if (isBoardFull()) {
            return 0;
        }

        if (isMaximizing) {
            int bestScore = Integer.MIN_VALUE;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (buttons[i][j].getText().equals("")) {
                        buttons[i][j].setText(String.valueOf(PLAYER_O));
                        int score = minimax(false);
                        buttons[i][j].setText("");
                        bestScore = Math.max(score, bestScore);
                    }
                }
            }
            return bestScore;
        } else {
            int bestScore = Integer.MAX_VALUE;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (buttons[i][j].getText().equals("")) {
                        buttons[i][j].setText(String.valueOf(PLAYER_X));
                        int score = minimax(true);
                        buttons[i][j].setText("");
                        bestScore = Math.min(score, bestScore);
                    }
                }
            }
            return bestScore;
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new TicTacToeGame2());
    }
}
