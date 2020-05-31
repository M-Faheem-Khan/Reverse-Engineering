# Walkthrough: Level 1

`Author: Muhammad F. Khan`  
`Github: https://github.com/M-Faheem-Khan/Reverse-Engineering`  
`Assumption: A linux system is being used or the user has untilities used in this walkthrough on their system.`  

Running the `level_1` binary by `./level_1`. We can see that the program asks us the user for the password if we want to get the challenge flag.
```
Please Enter the password to get the challenge flag!
Password:
```

If we enter any password the program prints `Invalid Password. Please try again` and exits. We can first use the `strings` utility that is 
pre-installed on most if not all linux distributions. `Strings` utility prints all strings in a file/program. To learn more you can view the 
man pages. 
```bash
man strings
```

```bash
strings ./level_1
```

Output
```
/lib64/ld-linux-x86-64.so.2
mgUa
libc.so.6
puts
__stack_chk_fail
stdin
printf
fgets
__cxa_finalize
strcmp
__libc_start_main
GLIBC_2.4
GLIBC_2.2.5
_ITM_deregisterTMCloneTable
__gmon_start__
_ITM_registerTMCloneTable
u+UH
RevEng{FH
lag_1_eaH
sy_peasyH
[]A\A]A^A_
Please Enter the password to get the challenge flag!
Password:
Password100
Flag: %s
Invalid Password. Please try again
:*3$"
GCC: (Ubuntu 9.3.0-10ubuntu2) 9.3.0
crtstuff.c
deregister_tm_clones
__do_global_dtors_aux
completed.8059
__do_global_dtors_aux_fini_array_entry
frame_dummy
__frame_dummy_init_array_entry
main.c
__FRAME_END__
__init_array_end
_DYNAMIC
__init_array_start
__GNU_EH_FRAME_HDR
_GLOBAL_OFFSET_TABLE_
__libc_csu_fini
_ITM_deregisterTMCloneTable
puts@@GLIBC_2.2.5
stdin@@GLIBC_2.2.5
_edata
__stack_chk_fail@@GLIBC_2.4
printf@@GLIBC_2.2.5
__libc_start_main@@GLIBC_2.2.5
fgets@@GLIBC_2.2.5
__data_start
strcmp@@GLIBC_2.2.5
__gmon_start__
__dso_handle
_IO_stdin_used
__libc_csu_init
__bss_start
main
__TMC_END__
_ITM_registerTMCloneTable
__cxa_finalize@@GLIBC_2.2.5
.symtab
.strtab
.shstrtab
.interp
.note.gnu.property
.note.gnu.build-id
.note.ABI-tag
.gnu.hash
.dynsym
.dynstr
.gnu.version
.gnu.version_r
.rela.dyn
.rela.plt
.init
.plt.got
.plt.sec
.text
.fini
.rodata
.eh_frame_hdr
.eh_frame
.init_array
.fini_array
.dynamic
.data
.bss
.comment
```

If we skip the first ~10 lines we can see some of the text we already saw when we first ran the program
```
RevEng{FH
lag_1_eaH
sy_peasyH
[]A\A]A^A_
Please Enter the password to get the challenge flag!
Password:
Password100
Flag: %s
Invalid Password. Please try again
```

We can see the flag, various prompts and password. From this we now know that the password is `Password100`. and the Flag is `RevEng{Flag_1_easy_peasy}`
with the `H` at the end of flag makes it a little difficult to view the flag. So we can just run the program know and pass it the password.  

```bash 
./level_1
Please Enter the password to get the challenge flag!
Password: Password100
Flag: RevEng{Flag_1_easy_peasy}
```





