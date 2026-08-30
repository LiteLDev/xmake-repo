#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class PhotoItemSavedData;
// clang-format on

class PhotoItemSavedDataCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::unique_ptr<PhotoItemSavedData>>> mPhotoData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PhotoItemSavedDataCollection();

    MCNAPI ::PhotoItemSavedData* _loadPhotoData(::ActorUniqueID const&, ::ActorUniqueID const&, std::string const&);

    MCNAPI ::PhotoItemSavedData* getPhotoSavedData(::CompoundTag const&);

    MCNAPI ~PhotoItemSavedDataCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
