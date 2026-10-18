#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

class RegistryHandle {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // RegistryHandle inner types define
    using value_type = ushort;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ushort> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnk371898;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI RegistryHandle();

    MCNAPI ushort getValue() const;

    MCNAPI explicit operator bool() const;

    MCNAPI void setValue(ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    RegistryHandle& operator=(RegistryHandle const&);
    RegistryHandle(RegistryHandle const&);
    RegistryHandle();
#endif // @header-generator platform
};

} // namespace VoxelShapes
