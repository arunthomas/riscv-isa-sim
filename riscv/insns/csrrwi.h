int csr = validate_csr(insn.csr(), true);
WRITE_RD(sext_xprlen(p->set_pcr(csr, insn.rs1())));
