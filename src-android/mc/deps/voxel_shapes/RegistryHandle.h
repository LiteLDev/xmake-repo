#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

class RegistryHandle {
public:
    // RegistryHandle inner types define
    using value_type = ushort;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mValue;
    // NOLINTEND

public:
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
};

} // namespace VoxelShapes
