######### Case 2: Multipart_passer.

This is a parser for HTTP messages written in C. It parses both requests and responses. The parser is designed to be used in performance HTTP applications. It does not make any syscalls nor allocations, it does not buffer data, it can be interrupted at anytime.

The global variables include:
**struct multipart_parser multipart_parser**
**struct multipart_parser_settings multipart_parser_settings**
**struct multipart_parser_state multipart_parser_state** all in file **multipart_parser.h**.

This test case was selected because in has multiple global variables and not too complex.

Reference: https://github.com/iafonov/multipart-parser-c 

 


