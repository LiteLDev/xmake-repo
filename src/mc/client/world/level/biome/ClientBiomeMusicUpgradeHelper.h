#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/biome/MusicUpgradeData.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
// clang-format on

class ClientBiomeMusicUpgradeHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseGameVersion const&>                      mBaseGameVersion;
    ::ll::TypedStorage<8, 24, std::map<std::string_view, MusicUpgradeData>> mBiomesToMusicPerVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBiomeMusicUpgradeHelper& operator=(ClientBiomeMusicUpgradeHelper const&);
    ClientBiomeMusicUpgradeHelper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientBiomeMusicUpgradeHelper();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientBiomeMusicUpgradeHelper(::BaseGameVersion const&);

    MCNAPI std::optional<std::string> const getMusicDefinition(std::string const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BaseGameVersion const&);
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
#else // @header-generator platform
class ClientBiomeMusicUpgradeHelper {};
#endif // @header-generator platform
