Part 1: Create a cryptography class entitled Crypto.
This class will encapsulate the following:
Private Data:
string plaintext_filename;
string ciphertext_filename;
int key;
Constructor:
The constructor will initialize the private data members using parameters that were passed to it.
The constructor will also call the Encrypt() function.
Functions:
1. Encrypt()
a. Open the plaintext file.
b. Open the ciphertext file.
c. Encrypt the plaintext by
i. Inputting each character and storing it in a variable called ch
ii. Typecast ch into an integer
iii. Add the key value to ch
iv. Output the result to the ciphertext file. Separate each number with a space ‘ ‘.
d. Close both the plaintext and ciphertext files
2. void Decryption(string c_file, string p_file, int k)
a. Arguments
i. c_file ( ciphertext filename )
ii. p_file ( plaintext filename )
iii. k = key
b. Decrypt every number that was stored in the file by
i. Subtracting the value of the key from it
ii. Typcasting the result into a character
c. Output every character to the plaintextfile (p_file)
[Continues on the next page]
Part 2 Main function:
1. Create an object of type Crypto, called C.
2. Pass valid arguments to the constructor for C.
a. Example: "input.txt","output.txt",5
3. Call the decryption function for the C object with valid arguments.
a. Example: "output.txt", "input2.txt", 5
Note: The contents of input2.txt should match the contents of input.txt. This includes spacing.

