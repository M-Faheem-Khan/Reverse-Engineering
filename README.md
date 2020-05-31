# Reverse-Engineering
Learning to Reverse Engineer & Exploiting Binaries 

### Check List
- `strings`
- `strace`
- `ltrace`
- `Hexdump`
- Decompilers: `IDA / Ghidra`


#### Note  
All binaries can be found in the `levels` folder and are compiled using gcc on ubuntu. Source Code is available in `src` folder. Walkthrough are also available under `walkthrough` folder.

Flag format: `RevEng{some_string_here}`


### Binaries
Level 1
- Performs string comparison on user input and hard coded password. If password is correct prints the flag.
 
