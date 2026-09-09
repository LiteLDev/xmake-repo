#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
