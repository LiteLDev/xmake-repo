#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
struct ControllerIDtoClientMap;
// clang-format on

class MinecraftGameShimComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<IMinecraftGame*>> mGame;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameShimComponent& operator=(MinecraftGameShimComponent const&);
    MinecraftGameShimComponent(MinecraftGameShimComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftGameShimComponent();

    virtual bool isInGame() const;

    virtual void requestLeaveGame(bool, bool);

    virtual void quit(std::string const&, std::string const&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> retrieveCIDToClientMap() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftGameShimComponent(::gsl::not_null<IMinecraftGame*>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<IMinecraftGame*>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInGame() const;

    MCNAPI void $requestLeaveGame(bool, bool);

    MCNAPI void $quit(std::string const&, std::string const&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> $retrieveCIDToClientMap() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
