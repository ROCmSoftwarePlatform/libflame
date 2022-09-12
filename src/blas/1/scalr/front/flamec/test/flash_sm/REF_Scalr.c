/*

    Copyright (C) 2014, The University of Texas at Austin

    This file is part of libflame and is available under the 3-Clause
    BSD license, which can be found in the LICENSE file at the top-level
    directory, or at http://opensource.org/licenses/BSD-3-Clause

*/

#include "FLAME.h"

FLA_Error REF_Scalr( FLA_Uplo uplo, FLA_Obj alpha, FLA_Obj A )
{
  return FLA_Scalr( uplo, alpha, A );
}

