require_privilege(PRV_M);
p->set_csr(CSR_MSTATUS, set_field(STATE.mstatus, MSTATUS_PRV, PRV_U));
STATE.ubadaddr = STATE.mbadaddr;
STATE.ucause = STATE.mcause;
STATE.uepc = STATE.mepc;
set_pc(STATE.utvec);
