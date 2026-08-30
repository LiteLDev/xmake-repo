#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ExternalServerFileError : int {
    ManualServersUnsupported = 0,
    DuplicateAddressAndPort  = 1,
    UnknownError             = 2,
    IdNotFound               = 3,
};
