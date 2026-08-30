#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/storage/PhotoType.h"

// auto generated forward declare list
// clang-format off
class PhotoTransferPacket;
namespace Core { class Path; }
// clang-format on

struct PhotoTransferPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>    mPhotoName;
    ::ll::TypedStorage<8, 24, std::string>    mPhotoData;
    ::ll::TypedStorage<8, 24, std::string>    mBookId;
    ::ll::TypedStorage<1, 1, ::PhotoType>     mType;
    ::ll::TypedStorage<1, 1, ::PhotoType>     mSourceType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mOwnerId;
    ::ll::TypedStorage<8, 24, std::string>    mNewPhotoName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PhotoTransferPacketPayload(std::string const&);

    MCNAPI PhotoTransferPacketPayload(::PhotoTransferPacketPayload const&);

    MCNAPI ~PhotoTransferPacketPayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool fromDisk(::Core::Path, ::PhotoTransferPacket&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(::PhotoTransferPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
