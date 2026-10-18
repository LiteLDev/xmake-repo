#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class SavedData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>         mDirty;
    ::ll::TypedStorage<8, 24, std::string> mId;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>           mDirty;
    ::ll::TypedStorage<8, 32, ::std::string> mId;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SavedData();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SavedData();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deserialize(::CompoundTag const&) = 0;
#else // @header-generator platform
    virtual void deserialize(::CompoundTag const& tag) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serialize(::CompoundTag&) const = 0;
#else // @header-generator platform
    virtual void serialize(::CompoundTag& tag) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
