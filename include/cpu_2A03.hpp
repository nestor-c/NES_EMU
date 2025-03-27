

class My_2A03 {
	protected:
	public: My_2A03();
		~My_2A03();

		//Byte long accumulator
		uint8_t A,X,Y,S,P;
		uint16_t PC;
		
		//Official instructions by type
		//Access
		LDA()
		STA()
		LDX()
		STX()
		LDY()
		STY()
		//Transfer
		TAX()
		TXA()
		TAY()
		TYA()
		//Arithmetic
		ADC()
		SBC()
		INC()
		DEC()
		INX()
		DEX()
		INY()
		DEY()
		//Shift
		ASL() 
		LSR()
		ROL()
		ROR()

		ControlUnit();
		ProgramCounter();
		InstructionDecoder();
		MM();
		Clock();
	private:

}

#endif
