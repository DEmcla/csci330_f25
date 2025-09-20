#include <cstdio>

struct BankAccount {
  double balance;
  int account_number;
  static const double& get_balance(const BankAccount& currAccount) {
    return currAccount.balance;
  }
  static BankAccount& get_account_for_update(BankAccount currAccounts[],
                                             int accountNum) {
    return currAccounts[accountNum - 1];
  }
  // this is incase somehow it doesnt work
};

// TODO: Write a function 'get_balance' that takes a const BankAccount
// reference and returns a const reference to the balance

// TODO: Write a function 'get_account_for_update' that takes an array of
// BankAccount and an account number, then returns a reference to the matching
// account (For simplicity, assume the account exists and is at index =
// account_number - 1)

int main() {
  BankAccount accounts[3] = {{1000.50, 1}, {2500.75, 2}, {750.25, 3}};
  printf("Balance of account 2: %.2f\n", BankAccount::get_balance(accounts[1]));
  (BankAccount::get_account_for_update(accounts, 1)).balance = 1200;
  printf(
      "Balance of account 1: %.2f\nBalance of account 2: %.2f\nBalance of "
      "account "
      "3: %.2f\n",
      BankAccount::get_balance(accounts[0]),
      BankAccount::get_balance(accounts[1]),
      BankAccount::get_balance(accounts[2]));
  // TODO: Use get_balance to display account 2's balance
  // TODO: Use get_account_for_update to modify account 1's balance to
  // 1200.00
  // TODO: Display all account balances

  return 0;
}