require_rv64;
// store data
MMU.store_uint64(RS1 + insn.s_imm(), RS2);
// store tag
MMU.tag_write(RS1 + insn.s_imm(), RS2_TAG);

