#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class ResultCode : ushort {
    // bitfield representation
#if defined(LL_PLAT_A) // @header-generator platform
    info                   = 1 << 0,
    warning                = 1 << 1,
    unrecognized_field     = 1 << 2,
    error                  = 1 << 3,
    malformed_input        = 1 << 4,
    undefined_schema       = 1 << 5,
    constraint_violation   = 1 << 6,
    missing_required_field = 1 << 7,
    unsupported_type       = 1 << 8,
    deprecated_member      = 1 << 9,
    unrecognized_component = 1 << 10,
    unsupported_version    = 1 << 11,
    invalid_enum_value     = 1 << 12,
    _entt_enum_as_bitmask  = 65535,
    all                    = 65535,
#else // @header-generator platform
    Info                  = 1 << 0,
    Warning               = 1 << 1,
    UnrecognizedField     = 1 << 2,
    Error                 = 1 << 3,
    MalformedInput        = 1 << 4,
    UndefinedSchema       = 1 << 5,
    ConstraintViolation   = 1 << 6,
    MissingRequiredField  = 1 << 7,
    UnsupportedType       = 1 << 8,
    DeprecatedMember      = 1 << 9,
    UnrecognizedComponent = 1 << 10,
    UnsupportedVersion    = 1 << 11,
    InvalidEnumValue      = 1 << 12,
    EnttEnumAsBitmask     = 65535,
    All                   = 65535,
#endif // @header-generator platform
};

}
