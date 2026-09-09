#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/materials/definition/SamplerAccess.h"

namespace dragon::materials {

struct SamplerSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                            mSlot;
    ::ll::TypedStorage<8, 24, std::string>                                   mName;
    ::ll::TypedStorage<8, 8, ulong>                                          mNameHash;
    ::ll::TypedStorage<8, 24, std::string>                                   mPropertyName;
    ::ll::TypedStorage<8, 24, std::string>                                   mCustomType;
    ::ll::TypedStorage<4, 4, uint>                                           mCustomTypeStride;
    ::ll::TypedStorage<1, 1, ::dragon::materials::definition::SamplerAccess> mAccess;
    ::ll::TypedStorage<1, 1, bool>                                           mIsUAV;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SamplerSlot();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::materials
