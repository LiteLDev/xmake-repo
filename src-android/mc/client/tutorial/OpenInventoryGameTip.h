#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/tutorial/HotbarGameTip.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class Player;
// clang-format on

class OpenInventoryGameTip : public ::HotbarGameTip, public ::PlayerEventListener {
public:
    // prevent constructor by default
    OpenInventoryGameTip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OpenInventoryGameTip();

    virtual void prepareForDisplay();

    virtual std::string getAnimationPrefix() const;

    virtual std::string getLocalizationPrefix() const;

    virtual std::array<int, 2> getAnimationSizeDesktop() const;

    virtual std::array<int, 2> getAnimationSizeTouch() const;

    virtual ::EventResult onPlayerTick(::Player&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OpenInventoryGameTip(std::shared_ptr<ClientInstanceScreenModel> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $prepareForDisplay();

    MCNAPI std::string $getAnimationPrefix() const;

    MCNAPI std::string $getLocalizationPrefix() const;

    MCNAPI std::array<int, 2> $getAnimationSizeDesktop() const;

    MCNAPI std::array<int, 2> $getAnimationSizeTouch() const;

    MCNAPI ::EventResult $onPlayerTick(::Player&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
