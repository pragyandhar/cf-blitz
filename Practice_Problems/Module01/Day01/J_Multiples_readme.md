# J. Multiples 🔁📏

This problem is a basic number theory challenge testing divisibility logic.

---

## 📝 Problem Statement

Given two integers **A** and **B**, print:

- **"Multiples"** if **A is a multiple of B** or **B is a multiple of A**
- Otherwise, print **"No Multiples"**

### 🔢 Input Format

- A single line containing two integers **A** and **B** such that: `1 ≤ A, B ≤ 10^6`

### 📤 Output Format

- Print **"Multiples"** or **"No Multiples"** accordingly

---

## 💡 Sample Input & Output

| Input | Output       |
| ----- | ------------ |
| 9 3   | Multiples    |
| 6 24  | Multiples    |
| 12 5  | No Multiples |

---

## 🧠 Explanation

- **A is said to be a multiple of B if B divides A without remainder.**

### 🧾 First Example:

- 9 is divisible by 3 → ✅ Output: **Multiples**

### 🧾 Second Example:

- 6 is not divisible by 24 ❌
- But 24 is divisible by 6 → ✅ Output: **Multiples**

### 🧾 Third Example:

- 12 is not divisible by 5 ❌ and 5 is not divisible by 12 ❌
- Output: **No Multiples**

---

## 🔗 Codeforces Question Link

> [J. Multiples](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J)
