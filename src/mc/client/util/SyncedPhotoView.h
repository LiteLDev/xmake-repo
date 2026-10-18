#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/util/ViewStatus.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class PhotoStorage;
struct PhotoStorageContainer;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class SyncedPhotoView {
public:
    // SyncedPhotoView inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class PhotoStatus : int {
        None    = 0,
        Pending = 1,
        Loaded  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SyncedPhotoView::PhotoStatus>> mPhotoStatus;
    ::ll::TypedStorage<8, 8, ::PhotoStorage&>                                                mStorage;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PhotoStorageContainer>>                         mContainer;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                                mPacketSender;
    // NOLINTEND

public:
    // prevent constructor by default
    SyncedPhotoView& operator=(SyncedPhotoView const&);
    SyncedPhotoView(SyncedPhotoView const&);
    SyncedPhotoView();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SyncedPhotoView(::PhotoStorage&, ::PhotoStorageContainer const, ::PacketSender&);

    MCNAPI ::ViewStatus viewPhoto(std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isLoadedStatus(::ViewStatus);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PhotoStorage&, ::PhotoStorageContainer const, ::PacketSender&);
    // NOLINTEND
#else // @header-generator platform
    enum class PhotoStatus : int {};
#endif // @header-generator platform
};
