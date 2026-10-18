#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ExternalServerWorldError : int {
    NameIsEmpty             = 0,
    AddressIsEmpty          = 1,
    InvalidIpAddress        = 2,
    InvalidPortNumber       = 3,
    UnknownError            = 4,
    IdNotFound              = 5,
    DuplicateAddressAndPort = 6,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ExternalServerWorldError : int {
    NameIsEmpty             = 0,
    AddressIsEmpty          = 1,
    InvalidIpAddress        = 2,
    InvalidPortNumber       = 3,
    UnknownError            = 4,
    IdNotFound              = 5,
    DuplicateAddressAndPort = 6,
};
#else // @header-generator platform
enum class ExternalServerWorldError : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
