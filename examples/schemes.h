/*
	Copyright (c) 2023, VeriSign, Inc.
	All rights reserved.

	Redistribution and use in source and binary forms, with or without
	modification, are permitted (subject to the limitations in the disclaimer
	below) provided that the following conditions are met:

		* Redistributions of source code must retain the above copyright notice,
		this list of conditions and the following disclaimer.

		* Redistributions in binary form must reproduce the above copyright
		notice, this list of conditions and the following disclaimer in the
		documentation and/or other materials provided with the distribution.

		* Neither the name of the copyright holder nor the names of its
		contributors may be used to endorse or promote products derived from this
		software without specific prior written permission.

	NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY
	THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
	CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
	LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
	PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
	CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
	EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
	PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
	BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
	IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
	ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
	POSSIBILITY OF SUCH DAMAGE.
*/
#ifndef __MTL_SCHEMES_H__
#define __MTL_SCHEMES_H__

#include "mtltool.h"

// Flag definition that indicates if randomization is desired.
// Note: This is set when SPHNICS+ is built with liboqs so it must match
#define RANDOMIZE 1

ALGORITHM algos[] = {

	/*
	- name;
	- sec_param;
	- nist_level;
	- randomize;
	- robust;
	- opt;
	- algo;
	- oqs_str;
	*/

	/* SHPINCS & SHAKE */

	{"SPHINCS+-MTL-SHAKE-128S-SIMPLE", 16, 1, RANDOMIZE, SIMPLE, 's',
	 SPX_ALG_SHAKE, "SPHINCS+-SHAKE-128s-simple"}
	,
	{"SPHINCS+-MTL-SHAKE-128F-SIMPLE", 16, 1, RANDOMIZE, SIMPLE, 'f',
	 SPX_ALG_SHAKE, "SPHINCS+-SHAKE-128f-simple"}
	,
	{"SPHINCS+-MTL-SHAKE-192S-SIMPLE", 24, 3, RANDOMIZE, SIMPLE, 's',
	 SPX_ALG_SHAKE, "SPHINCS+-SHAKE-192s-simple"}
	,
	{"SPHINCS+-MTL-SHAKE-192F-SIMPLE", 24, 3, RANDOMIZE, SIMPLE, 'f',
	 SPX_ALG_SHAKE, "SPHINCS+-SHAKE-192f-simple"}
	,
	{"SPHINCS+-MTL-SHAKE-256S-SIMPLE", 32, 5, RANDOMIZE, SIMPLE, 's',
	 SPX_ALG_SHAKE, "SPHINCS+-SHAKE-256s-simple"}
	,
	{"SPHINCS+-MTL-SHAKE-256F-SIMPLE", 32, 5, RANDOMIZE, SIMPLE, 'f',
	 SPX_ALG_SHAKE, "SPHINCS+-SHAKE-256f-simple"}
	,

	/* SHPINCS & SHA2 */

	{"SPHINCS+-MTL-SHA2-128S-SIMPLE", 16, 1, RANDOMIZE, SIMPLE, 's',
	 SPX_ALG_SHA2, "SPHINCS+-SHA2-128s-simple"}
	,
	{"SPHINCS+-MTL-SHA2-128F-SIMPLE", 16, 1, RANDOMIZE, SIMPLE, 'f',
	 SPX_ALG_SHA2, "SPHINCS+-SHA2-128f-simple"}
	,
	{"SPHINCS+-MTL-SHA2-192S-SIMPLE", 24, 3, RANDOMIZE, SIMPLE, 's',
	 SPX_ALG_SHA2, "SPHINCS+-SHA2-192s-simple"}
	,
	{"SPHINCS+-MTL-SHA2-192F-SIMPLE", 24, 3, RANDOMIZE, SIMPLE, 'f',
	 SPX_ALG_SHA2, "SPHINCS+-SHA2-192f-simple"}
	,
	{"SPHINCS+-MTL-SHA2-256S-SIMPLE", 32, 5, RANDOMIZE, SIMPLE, 's',
	 SPX_ALG_SHA2, "SPHINCS+-SHA2-256s-simple"}
	,
	{"SPHINCS+-MTL-SHA2-256F-SIMPLE", 32, 5, RANDOMIZE, SIMPLE, 'f',
	 SPX_ALG_SHA2, "SPHINCS+-SHA2-256f-simple"}
	,

	{NULL, 0, 0, 0, 0, ' ', ALG_NONE, ""}
};

#endif				// __MTL_SCHEMES_H__
