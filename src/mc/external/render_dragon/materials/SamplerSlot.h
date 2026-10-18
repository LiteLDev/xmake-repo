#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/materials/definition/SamplerAccess.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct SamplerSlot {};
#endif // @header-generator platform

} // namespace dragon::materials
