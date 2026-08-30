#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Realms {

struct WorldBackupPackInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mIsMarketplacePack;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mPackId;
    ::ll::TypedStorage<8, 24, std::string> mRefId;
    ::ll::TypedStorage<8, 8, long>         mSizeBytes;
    ::ll::TypedStorage<4, 4, int>          mPosition;
    ::ll::TypedStorage<4, 4, int>          mSubpackIndex;
    ::ll::UntypedStorage<8, 24>            mVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldBackupPackInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldBackupPackInfo(::Realms::WorldBackupPackInfo const&);

    MCNAPI ~WorldBackupPackInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Realms::WorldBackupPackInfo fromJson(::Json::Value const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Realms::WorldBackupPackInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Realms
