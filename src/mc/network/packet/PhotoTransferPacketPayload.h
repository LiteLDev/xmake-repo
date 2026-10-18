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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>    mPhotoName;
    ::ll::TypedStorage<8, 24, std::string>    mPhotoData;
    ::ll::TypedStorage<8, 24, std::string>    mBookId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>  mPhotoName;
    ::ll::TypedStorage<8, 32, ::std::string>  mPhotoData;
    ::ll::TypedStorage<8, 32, ::std::string>  mBookId;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::PhotoType>     mType;
    ::ll::TypedStorage<1, 1, ::PhotoType>     mSourceType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mOwnerId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>    mNewPhotoName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>  mNewPhotoName;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    PhotoTransferPacketPayload();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PhotoTransferPacketPayload(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit PhotoTransferPacketPayload(::std::string const& photoName);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PhotoTransferPacketPayload(::PhotoTransferPacketPayload const&);

    MCNAPI ~PhotoTransferPacketPayload();
#else // @header-generator platform
    MCAPI ~PhotoTransferPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool fromDisk(::Core::Path, ::PhotoTransferPacket&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static bool fromDisk(::Core::Path path, ::PhotoTransferPacket& result);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(::PhotoTransferPacketPayload const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::string const& photoName);
#endif
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
};
