#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CompoundTagUpdaterResult.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class CompoundTagUpdater;
class CompoundTagUpdaterNodeBuilder;
// clang-format on

class CompoundTagUpdaterContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>                                             mUpdaterVersion;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<CompoundTagUpdater>>> mUpdaters;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>                                                   mUpdaterVersion;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CompoundTagUpdater>>> mUpdaters;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CompoundTagUpdaterContext();
#else // @header-generator platform
    MCAPI ::CompoundTagUpdaterNodeBuilder addUpdater(uchar major, uchar minor, uchar patch);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTagUpdaterNodeBuilder addUpdater(uchar const*);

    MCNAPI ::CompoundTagUpdaterNodeBuilder addUpdater(uchar, uchar, uchar);

    MCNAPI ::CompoundTagUpdaterResult update(::CompoundTag&, uint) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI ::CompoundTagUpdaterResult update(::CompoundTag& tag, uint version) const;
#endif // @header-generator platform
    // NOLINTEND
};
