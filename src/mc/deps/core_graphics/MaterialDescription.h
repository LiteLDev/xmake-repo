#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

#if defined(LL_PLAT_A) // @header-generator platform
struct MaterialDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                  mName;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mFlags;
    ::ll::TypedStorage<8, 8, ulong>                                         mAllocatedResourceMemory;
    ::ll::TypedStorage<8, 8, ulong>                                         mAllocatedCompiledDefinitionMemory;
    ::ll::TypedStorage<8, 8, ulong>                                         mTotalVariantCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MaterialDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct MaterialDescription {};
#endif // @header-generator platform

} // namespace cg
