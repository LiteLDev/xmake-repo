#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mOffset;
    ::ll::TypedStorage<1, 1, bool>  mRelative;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RelativeFloat();

    MCNAPI RelativeFloat(float, bool);

    MCNAPI float getValue(float) const;

    MCNAPI bool isRelative() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(float, bool);
#else // @header-generator platform
    float mOffset;
    bool  mRelative;
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::RelativeFloat>();
// clang-format on
#endif // @header-generator platform
