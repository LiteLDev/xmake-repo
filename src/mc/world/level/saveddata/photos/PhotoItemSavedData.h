#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class PhotoItemSavedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPhotoId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>    mPhotoName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>  mPhotoName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPhotoOwner;
    ::ll::TypedStorage<1, 1, bool>            mDirty;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PhotoItemSavedData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ActorUniqueID getId() const;

    MCNAPI std::string const& getPhotoName() const;

    MCNAPI ::ActorUniqueID getPhotoOwner() const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
