#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

struct CreatePhotoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mId;
    ::ll::TypedStorage<8, 24, std::string>    mPhotoName;
    ::ll::TypedStorage<8, 24, std::string>    mPhotoItemName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CreatePhotoPacketPayload(::ActorUniqueID, std::string const&);

    MCNAPI ~CreatePhotoPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorUniqueID, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
