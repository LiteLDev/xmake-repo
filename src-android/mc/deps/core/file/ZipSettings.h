#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/ZipFileRestrictions.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/ZipCompressionLevel.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
// clang-format on

namespace Core::ZipUtils {

class ZipSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::Core::ZipUtils::ZipFileRestrictions> mRestrictions;
    ::ll::TypedStorage<1, 1, bool>                                   mZipDirectoryContents;
    ::ll::TypedStorage<1, 1, bool>                                   mSkipInaccessibleFiles;
    ::ll::TypedStorage<4, 4, int>                                    mCompressionLevel;
    ::ll::UntypedStorage<8, 24>                                      mFileAccess;
    ::ll::TypedStorage<8, 24, std::string>                           mPassword;
    ::ll::TypedStorage<4, 4, int>                                    mZip64;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZipSettings();

    MCNAPI explicit ZipSettings(::Core::ZipUtils::ZipCompressionLevel);

    MCNAPI ~ZipSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Core::ZipUtils::ZipCompressionLevel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core::ZipUtils
