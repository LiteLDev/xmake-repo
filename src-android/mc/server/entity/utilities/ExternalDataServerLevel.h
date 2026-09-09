#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/entity/utilities/ExternalDataInterface.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ILevel;
struct AdventureSettings;
// clang-format on

struct ExternalDataServerLevel : public ::ExternalDataInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mLevel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExternalDataServerLevel();

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
    MCNAPI explicit ExternalDataServerLevel(::gsl::not_null<Bedrock::NonOwnerPointer<const ILevel>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<const ILevel>>);
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
