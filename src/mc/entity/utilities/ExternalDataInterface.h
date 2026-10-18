#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
struct AdventureSettings;
// clang-format on

struct ExternalDataInterface {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ExternalDataInterface();
#else // @header-generator platform
    virtual ~ExternalDataInterface() = default;
#endif // @header-generator platform

    virtual bool isInWorldAndNotShowingAnyMenuScreens() const = 0;

    virtual bool isPausingGame() const = 0;

    virtual ::AdventureSettings const& getAdventureSettings() const = 0;

    virtual ::ClientPlayMode getPlayMode() const = 0;

    virtual ::InputMode getInputMode() const = 0;

    virtual ::GameType getDefaultGameType() const = 0;

    virtual float getSmoothRotationSpeed() const = 0;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
