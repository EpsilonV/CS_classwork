2.87

Format A:			Format B:
1 sign bit			1 sign bit
5 exp bits (bias = 15)		4 exp bits (bias = 7)
3 frac bits			4 frac bits

rounding is towards +infinity

Bits			Value			Bits				Value
1 01111 001		-9/8			1 0111 0010			-9/8
0 10110 011		176				0 1110 0110			176
1 00111 010		-5/1024			1 0000 0000 		-0
0 00000 111 	15/131072		0 0000 0000			0
1 11100 000		-8192			1 1111 0000 		-infinity		
0 10111 100		384				0 1111 0000 		infinity