#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogCommandSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mFogIdentifier;
    ::ll::TypedStorage<8, 24, std::string> mUserProvidedId;
    // NOLINTEND

public:
    // prevent constructor by default
    FogCommandSettings& operator=(FogCommandSettings const&);
    FogCommandSettings(FogCommandSettings const&);
    FogCommandSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FogCommandSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
