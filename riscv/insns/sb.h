
reg_t address = RS1 + insn.s_imm();
tag_t mem_tag = MMU.tag_read(address);
STORE_TAG_CHECK(mem_tag, address);
MMU.store_uint8(address, RS2);
