#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class PlayerPermission : int {
    NonMember = 0,
    Visitor   = 1,
    Member    = 2,
    Operator  = 3,
    Owner     = 4,
};

}
