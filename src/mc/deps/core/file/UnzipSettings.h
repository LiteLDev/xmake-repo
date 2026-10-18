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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::Core::ZipUtils::ZipFileRestrictions> mRestrictions;
    ::ll::TypedStorage<1, 1, bool>                                   mDeleteZipOnSuccess;
    ::ll::TypedStorage<1, 1, bool>                                   mPreventOverwrites;
    ::ll::UntypedStorage<8, 24>                                      mFileAccess;
    ::ll::TypedStorage<8, 24, std::string>                           mPassword;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mSelectedPaths;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mUnselectedPaths;
    ::ll::TypedStorage<8, 8, ulong>                                  mMaxDirectoryDepth;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::Core::ZipUtils::ZipFileRestrictions>     mRestrictions;
    ::ll::TypedStorage<1, 1, bool>                                       mDeleteZipOnSuccess;
    ::ll::TypedStorage<1, 1, bool>                                       mPreventOverwrites;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>> mFileAccess;
    ::ll::TypedStorage<8, 32, ::std::string>                             mPassword;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>              mSelectedPaths;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>              mUnselectedPaths;
    ::ll::TypedStorage<8, 8, uint64>                                     mMaxDirectoryDepth;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    UnzipSettings& operator=(UnzipSettings const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI UnzipSettings();

    MCNAPI UnzipSettings(::Core::ZipUtils::UnzipSettings const&);

    MCNAPI ~UnzipSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Core::ZipUtils::UnzipSettings const&);
#else // @header-generator platform
    MCAPI ~UnzipSettings();
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

} // namespace Core::ZipUtils
