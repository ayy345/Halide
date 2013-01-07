#ifndef HALIDE_IR_EQUALITY_H
#define HALIDE_IR_EQUALITY_H

#include "IR.h"

namespace Halide { 
namespace Internal {

bool equal(Expr a, Expr b);
bool equal(Stmt a, Stmt b);

}
}

#endif
