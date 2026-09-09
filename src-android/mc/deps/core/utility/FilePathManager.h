#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
namespace Core { struct FilePathManagerPaths; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

namespace Core {

class FilePathManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    FilePathManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FilePathManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FilePathManager(::Core::FilePathManagerPaths&&);

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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& ARCHIVE_DIR();

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& HOME_DIR();

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& PERSONA_TEST_DIR();

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& REALM_WORLDS_DIR();

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& RESOURCE_PACKS_DIR();

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& WORLDS_DIR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::FilePathManagerPaths&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
