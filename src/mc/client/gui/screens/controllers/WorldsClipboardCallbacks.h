#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
// clang-format on

struct WorldsClipboardCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetLevelId;
    ::ll::UntypedStorage<8, 48> mGetLevelName;
    ::ll::UntypedStorage<8, 48> mGetEduCloudFileName;
    ::ll::UntypedStorage<8, 48> mHasAvailableSpaceForLevel;
    ::ll::UntypedStorage<8, 48> mIsEduCloudWorld;
    ::ll::UntypedStorage<8, 48> mCanCopy;
    ::ll::UntypedStorage<8, 48> mPreCopyCallback;
    ::ll::UntypedStorage<8, 48> mCopySuccess;
    ::ll::UntypedStorage<8, 48> mExportWorld;
    ::ll::UntypedStorage<8, 48> mShouldShowDeleteWarning;
    ::ll::UntypedStorage<8, 48> mDeleteCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldsClipboardCallbacks& operator=(WorldsClipboardCallbacks const&);
    WorldsClipboardCallbacks(WorldsClipboardCallbacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::WorldsClipboardCallbacks& operator=(::WorldsClipboardCallbacks&&);

    MCNAPI ~WorldsClipboardCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
// clang-format on

struct WorldsClipboardCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::string const&()>> mGetLevelId;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string const&()>> mGetLevelName;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string const&()>> mGetEduCloudFileName;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::shared_ptr<::Core::FileStorageArea>)>>
                                                                                 mHasAvailableSpaceForLevel;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mIsEduCloudWorld;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mCanCopy;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                           mPreCopyCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                           mCopySuccess;
    ::ll::TypedStorage<8, 64, ::std::function<void(::FileArchiver::ExportType)>> mExportWorld;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mShouldShowDeleteWarning;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                           mDeleteCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldsClipboardCallbacks& operator=(WorldsClipboardCallbacks const&);
    WorldsClipboardCallbacks(WorldsClipboardCallbacks const&);
    WorldsClipboardCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::WorldsClipboardCallbacks& operator=(::WorldsClipboardCallbacks&&);

    MCAPI ~WorldsClipboardCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct WorldsClipboardCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
