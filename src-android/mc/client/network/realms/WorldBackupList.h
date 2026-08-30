#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/WorldBackup.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Realms {

struct WorldBackupList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>                              mStorageBytesTotal;
    ::ll::TypedStorage<8, 8, long>                              mStorageBytesUsed;
    ::ll::TypedStorage<8, 24, std::vector<Realms::WorldBackup>> mManualBackups;
    ::ll::TypedStorage<8, 24, std::vector<Realms::WorldBackup>> mAutomaticBackups;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldBackupList& operator=(WorldBackupList const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldBackupList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Realms
