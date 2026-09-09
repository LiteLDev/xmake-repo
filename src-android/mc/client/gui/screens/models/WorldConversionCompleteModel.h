#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
