#include <stdint.h>
#include <stdio.h>

class My_2A03 {
	protected:
	public: My_2A03();
		~My_2A03();
		
		/*
		 * 0-07FF =  RAM
		 * 0800 - 0FFF | 
		 * 1000 - 17FF |--- Mirrors of  $0000 - $07FF
		 * 1800 - 1FFF |
		 * */
		char MEMORY[65536] = {0}

		/* Determine if a data structure is needed to enable certain address modes
		 * From my understanding now this will be a parameter for specific instructions	
		Indexed_Addressing;
		Implicit_Addressing;
		Accumulator
		Immediate
		Zero page
		Absolute
		Relative
		Indirect
		 */

		//Byte long accumulator
		uint8_t A,X,Y,S,P;
		uint16_t PC;
		
		 //Official instructions by type
		 //Access
		void LDA()
		void STA()
		void LDX()
		void STX()
		void LDY()
		void STY()
		 //Transfer
		void TAX()
		void TXA()
		void TAY()
		void TYA()
		 //Arithmetic
		void ADC()
		void SBC()
		void INC()
		void DEC()
		void INX()
		void DEX()
		void INY()
		void DEY()
		 //Shift
		void ASL() 
		void LSR()
		void ROL()
		void ROR()
		 //Bitwise
		void AND()
		void ORA()
		void EOR()
		void BIT()
		 //Compare
		void CMP()
		void CPX()
		void CPY()
		 //Branch
		void BCC()
		void BCS()
		void BEQ()
		void BNE()
		void BPL()
		void BMI()
		void BVC()
		void BVS()
		 //Jump
		void JMP()
		void JSR()
		void RTS()
		void BRK()
		void RTI()
		 //Stack
		void PHA()
		void PLA()
		void PHP()
		void PLP()
		void TXS()
		void TSX()
		 //Flags
		void CLC()
		void SEC()
		void CLI()
		void SEI()
		void CLD()
		void SED()
		void CLV()
		 //Other
		void NOP()

		ControlUnit();
		ProgramCounter();
		InstructionDecoder();
		MM();
		Clock();
	private:

}

#endif
