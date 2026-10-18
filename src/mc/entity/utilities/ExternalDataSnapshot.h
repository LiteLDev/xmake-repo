#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/entity/utilities/ExternalDataInterface.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
struct AdventureSettings;
struct ExternalDataSnapshotComponent;
// clang-format on

struct ExternalDataSnapshot : public ::ExternalDataInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const ExternalDataSnapshotComponent*>> mSnapshotInstance;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExternalDataSnapshot();

    virtual bool isInWorldAndNotShowingAnyMenuScreens() const;

    virtual bool isPausingGame() const;

    virtual ::AdventureSettings const& getAdventureSettings() const;

    virtual ::ClientPlayMode getPlayMode() const;

    virtual ::InputMode getInputMode() const;

    virtual ::GameType getDefaultGameType() const;

    virtual float getSmoothRotationSpeed() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ExternalDataSnapshot(::ExternalDataSnapshotComponent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ExternalDataSnapshotComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInWorldAndNotShowingAnyMenuScreens() const;

    MCNAPI bool $isPausingGame() const;

    MCNAPI ::AdventureSettings const& $getAdventureSettings() const;

    MCNAPI ::ClientPlayMode $getPlayMode() const;

    MCNAPI ::InputMode $getInputMode() const;

    MCNAPI ::GameType $getDefaultGameType() const;

    MCNAPI float $getSmoothRotationSpeed() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
struct ExternalDataSnapshot {};
#endif // @header-generator platform
