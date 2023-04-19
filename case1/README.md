# Case 1: Extract from JSON Parsing in Contiki-NG-IoT.

The Json Parson is implemented with a stack abstraction **struct jsonparse_state *state**. This is a global variable that is used in push, modify, pop, atomic, skip_ws, is_atomic, jsonparse_setup, jsonparse_next, jsonparse_copy_value, jsonparse_get_value_as_int, jsonparse_get_value_as_long, jsonparse_strcmp_value, jsonparse_get_len, jsonparse_get_type, and jsonparse_has_next functions of file **jsonparse.c**.

This test case was selected as a starting case of keeping the base case simple.

Contiki-NG is an open-source, cross-platform operating system for Next-Generation IoT devices. It focuses on dependable (secure and reliable) low-power communication and standard protocols, such as IPv6/6LoWPAN, 6TiSCH, RPL, and CoAP. Contiki-NG comes with extensive documentation, tutorials, a roadmap, release cycle, and well-defined development flow for smooth integration of community contributions. https://github.com/contiki-ng/contiki-ng 

 


