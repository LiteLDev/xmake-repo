#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/world/LocalWorldInfo.h"

class WorldConversionCompleteModel : public ::MainMenuScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 848> mWorldInfo;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldConversionCompleteModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::LocalWorldInfo const& getImportedWorld() const;

    MCNAPI void setImportedWorld(std::string const&);

    MCNAPI void startImportedWorld();
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
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/world/LocalWorldInfo.h"

class WorldConversionCompleteModel : public ::MainMenuScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1040, ::LocalWorldInfo> mWorldInfo;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldConversionCompleteModel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void startImportedWorld();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIDlcBatcher();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForIMinecraftScreenModel();
    // NOLINTEND
};
#else // @header-generator platform
class WorldConversionCompleteModel {};
#endif // @header-generator platform
#endif // @header-generator platform
