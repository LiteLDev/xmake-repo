#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { template<typename T0> class ObservableValue; }
namespace Realms { struct WorldBackup; }
// clang-format on

namespace OreUI {

class WorldBackupData : public ::OreUI::PropertyObject<OreUI::WorldBackupData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mId;
    ::ll::UntypedStorage<8, 168> mWorldName;
    ::ll::UntypedStorage<8, 168> mBackupName;
    ::ll::UntypedStorage<8, 152> mEpochTime;
    ::ll::UntypedStorage<8, 168> mDatePosted;
    ::ll::UntypedStorage<8, 168> mTimePosted;
    ::ll::UntypedStorage<8, 152> mUncompressedSizeBytes;
    ::ll::UntypedStorage<8, 152> mCompressedSizeBytes;
    ::ll::UntypedStorage<8, 168> mGameServerVersion;
    ::ll::UntypedStorage<8, 104> mEnabledBehaviorPacks;
    ::ll::UntypedStorage<8, 104> mEnabledResourcePacks;
    ::ll::UntypedStorage<8, 152> mIsHardcore;
    ::ll::UntypedStorage<8, 152> mGameMode;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldBackupData& operator=(WorldBackupData const&);
    WorldBackupData(WorldBackupData const&);
    WorldBackupData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldBackupData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldBackupData(::Realms::WorldBackup const&);

    MCNAPI WorldBackupData(::OreUI::WorldBackupData&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Realms::WorldBackup const&);

    MCNAPI void* $ctor(::OreUI::WorldBackupData&&);
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

} // namespace OreUI
