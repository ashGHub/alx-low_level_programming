This is a readme file for pointers, arrays, and strings.

These tasks focus more on 2D, and multidimention arrays.


# How I cracked the password for the last advanced task

0. Download the crackme2 file `wget https://raw.githubusercontent.com/holbertonschool/0x06.c/master/crackme2`
1. [Read this article](https://www.linux.com/training-tutorials/cracking-simple-passworded-file-beginners-guide-security/)
2. Found out the hash was ***e99a18c428cb38d5f260853678922e03***
3. [Went to MD5 Center website](https://md5.gromweb.com/?md5=e99a18c428cb38d5f260853678922e03)
4. The website decrypted it for me to *abc123*
5. Pasted it to 101-crackme_password
6. Have to remove the new line in the file, used `tr -d '\n' < 101-crackme_password > newfile && mv newfile 101-crackme_password
`
