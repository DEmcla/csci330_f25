#include <cstdio>

struct BankAccount {
  double balance;
  int account_number;
};

const double &get_balance(const BankAccount &account) {
  return account.balance;
}

BankAccount &get_account_for_update(BankAccount accounts[],
                                    int account_number) {
  return accounts[account_number - 1];
}

int main() {
  BankAccount accounts[3] = {{1000.50, 1}, {2500.75, 2}, {750.25, 3}};

  const double &balance2 = get_balance(accounts[1]);
  printf("Account 2 balance: %.2f\n", balance2);

  BankAccount &acct1 = get_account_for_update(accounts, 1);
  acct1.balance = 1200.00;

  for (int i = 0; i < 3; ++i) {
    printf("Account %d balance: %.2f\n", accounts[i].account_number,
           accounts[i].balance);
  }

  return 0;
}
