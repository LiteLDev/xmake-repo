#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/ZipFileRestrictions.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
// clang-format on

namespace Core::ZipUtils {

class UnzipSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::Core::ZipUtils::ZipFileRestrictions> mRestrictions;
    ::ll::TypedStorage<1, 1, bool>                                   mDeleteZipOnSuccess;
    ::ll::TypedStorage<1, 1, bool>                                   mPreventOverwrites;
    ::ll::UntypedStorage<8, 24>                                      mFileAccess;
    ::ll::TypedStorage<8, 24, std::string>                           mPassword;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mSelectedPaths;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mUnselectedPaths;
    ::ll::TypedStorage<8, 8, ulong>                                  mMaxDirectoryDepth;
    // NOLINTEND

public:
    // prevent constructor by default
    UnzipSettings& operator=(UnzipSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UnzipSettings();

    MCNAPI UnzipSettings(::Core::ZipUtils::UnzipSettings const&);

    MCNAPI ~UnzipSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Core::ZipUtils::UnzipSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core::ZipUtils
