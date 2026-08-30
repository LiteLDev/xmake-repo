#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class PhotoItemSavedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPhotoId;
    ::ll::TypedStorage<8, 24, std::string>    mPhotoName;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPhotoOwner;
    ::ll::TypedStorage<1, 1, bool>            mDirty;
    // NOLINTEND

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
};
