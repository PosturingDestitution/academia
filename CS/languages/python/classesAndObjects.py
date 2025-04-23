'''
demonstrates the use of classes and objects in python to represent bank accounts

questions:
    __init__ what is a constructor?
    why self. keyword and this. keyword in java? whats exactly going on here?
    how does some basic string interpolation work in python?
'''

class Account:
    def __init__(self, accountNumber, balance=0): #constructor i think?
        self.accountNumber = accountNumber
        self.balance = balance

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            print(f"Deposit of ${amount:.2f} successful. New balance: ${self.balance:.2f}")
        else:
            print("Invalid deposit amount.")

    def withdraw(self, amount):
        if amount > 0 and amount <= self.balance:
            self.balance -= amount
            print(f"Withdrawal of ${amount:.2f} successful. New balance: ${self.balance:.2f}")
        else:
            print(f"Insufficient funds or invalid withdrawl amount.")

    def __str__(self):
        return f"Account {self.accountNumber}: Balance = ${self.balance:.2f}"

class Bank:
    def __init__(self):
        self.accounts = {}

    def createAccount(self, accountNumber, initialBalance = 0):
        if accountNumber not in self.accounts:
            self.accounts[accountNumber] = Account(accountNumber, initialBalance)
            print(f"Account {accountNumber} created successfully.")
        else:
            print(f"Account already exists.")

    def getAccount(self, accountNumber):
        return self.accounts.get(accountNumber)

    def __str__(self):
        accounts_str = "\n".join(str(account) for account in self.accounts.values())
        return f"Bank:\n{acount_str}"


#example:
bank1 = Bank()
bank1.createAccount("12345", 1000)
account = bank1.getAccount("12345")
print(account)






















