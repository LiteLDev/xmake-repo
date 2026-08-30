#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/WorldBackupPackInfo.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Realms {

struct WorldBackup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                              mWorldName;
    ::ll::TypedStorage<8, 24, std::string>                              mWorldTypeString;
    ::ll::TypedStorage<8, 24, std::string>                              mWorldDescription;
    ::ll::TypedStorage<8, 24, std::string>                              mBackupId;
    ::ll::TypedStorage<8, 24, std::string>                              mBackupName;
    ::ll::TypedStorage<8, 8, long>                                      mEpochTime;
    ::ll::TypedStorage<8, 8, long>                                      mUncompressedSizeBytes;
    ::ll::TypedStorage<8, 8, long>                                      mCompressedSizeBytes;
    ::ll::TypedStorage<8, 24, std::vector<Realms::WorldBackupPackInfo>> mEnabledBehaviorPacks;
    ::ll::TypedStorage<8, 24, std::vector<Realms::WorldBackupPackInfo>> mEnabledResourcePacks;
    ::ll::TypedStorage<4, 4, ::GameType>                                mGameType;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty>         mGameDifficulty;
    ::ll::TypedStorage<1, 1, bool>                                      mIsHardcore;
    ::ll::TypedStorage<8, 24, std::string>                              mGameServerVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldBackup(::Realms::WorldBackup const&);

    MCNAPI ::Realms::WorldBackup& operator=(::Realms::WorldBackup const&);

    MCNAPI ~WorldBackup();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Realms::WorldBackup fromJson(::Json::Value const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Realms::WorldBackup const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Realms
