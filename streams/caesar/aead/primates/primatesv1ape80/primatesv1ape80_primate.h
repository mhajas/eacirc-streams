namespace Primatesv1ape80_raw {

void Bytes2Element(unsigned char *inE, const unsigned char *in, unsigned long long start, int numElem);
void Element2Bytes(unsigned char *in, unsigned char *inE, unsigned long long start, int numBytes);
void InitializeState(unsigned char *state, unsigned char *key);
void p_1(unsigned char *state);
void p_1_inv(unsigned char *state);
void DataBytes2Element(const unsigned char *data, unsigned long long i, unsigned char *dataE);
void CipherElement2Bytes(unsigned char *cE, unsigned char *c, unsigned long long i);
void PrintElementsStateDec(unsigned char *state);
void PrintCipherTextDec(unsigned char *c);
void TagElement2Bytes(unsigned char *cE, unsigned char *c, unsigned long long i) ;
} // namespace Primatesv1ape80_raw
