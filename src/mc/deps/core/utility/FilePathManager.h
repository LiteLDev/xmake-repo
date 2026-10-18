#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/BasicStackString.h"
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
namespace Core { struct FilePathManagerPaths; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Core {

class FilePathManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>          mRoot;
    ::ll::UntypedStorage<8, 24>          mHome;
    ::ll::UntypedStorage<8, 24>          mWorlds;
    ::ll::UntypedStorage<8, 24>          mSharedWorlds;
    ::ll::UntypedStorage<8, 24>          mLevelArchive;
    ::ll::UntypedStorage<8, 24>          mUserData;
    ::ll::UntypedStorage<8, 24>          mSharedData;
    ::ll::UntypedStorage<8, 24>          mPersonaPiecePack;
    ::ll::UntypedStorage<8, 24>          mPackagePath;
    ::ll::UntypedStorage<8, 24>          mDataUrl;
    ::ll::UntypedStorage<8, 24>          mExternalFilePath;
    ::ll::UntypedStorage<8, 24>          mTemporaryFilePath;
    ::ll::UntypedStorage<8, 24>          mCacheFilePath;
    ::ll::UntypedStorage<8, 24>          mSettingsPath;
    ::ll::UntypedStorage<8, 24>          mResourcePacks;
    ::ll::TypedStorage<1, 1, bool const> mIsDedicatedServer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mRoot;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mHome;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mWorlds;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mSharedWorlds;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mLevelArchive;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mUserData;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mSharedData;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>       mPersonaPiecePack;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mPackagePath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mDataUrl;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mExternalFilePath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mTemporaryFilePath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mCacheFilePath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mSettingsPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mResourcePacks;
    ::ll::TypedStorage<1, 1, bool const>                               mIsDedicatedServer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FilePathManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FilePathManager();
#else // @header-generator platform
    virtual ~FilePathManager() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FilePathManager(::Core::FilePathManagerPaths&&);
#else // @header-generator platform
    MCAPI explicit FilePathManager(::Core::FilePathManagerPaths&& paths);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathView getCacheFilePath() const;

    MCNAPI ::Core::PathView getDataUrl() const;

    MCNAPI ::Core::PathView getExternalFilePath() const;

    MCNAPI ::Core::PathView getLevelArchivePath() const;

    MCNAPI ::Core::PathView getPackagePath() const;

    MCNAPI ::Core::PathView getResourcePacksPath() const;

    MCNAPI ::Core::PathView getSettingsPath() const;

    MCNAPI ::Core::PathView getTemporaryFilePath() const;

    MCNAPI ::Core::PathView getUserDataPath() const;

    MCNAPI ::Core::PathView getWorldsPath() const;

    MCNAPI bool isDedicatedServer() const;

    MCNAPI void setRootPath(::Core::PathView);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ulong getWorldsPathDirectoryLimit();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setRootPath(::Core::PathView path);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& ARCHIVE_DIR();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& ARCHIVE_DIR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& HOME_DIR();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& HOME_DIR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& PERSONA_TEST_DIR();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& PERSONA_TEST_DIR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& REALM_WORLDS_DIR();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& REALM_WORLDS_DIR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& RESOURCE_PACKS_DIR();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& RESOURCE_PACKS_DIR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& WORLDS_DIR();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& WORLDS_DIR();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::FilePathManagerPaths&&);
#else // @header-generator platform
    MCAPI void* $ctor(::Core::FilePathManagerPaths&& paths);
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
