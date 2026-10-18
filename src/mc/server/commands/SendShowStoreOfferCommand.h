#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ShowStoreOfferRedirectType.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class SendShowStoreOfferCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200>                           mTargets;
    ::ll::TypedStorage<8, 24, std::string>                 mOffer;
    ::ll::TypedStorage<1, 1, ::ShowStoreOfferRedirectType> mRedirectType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>> mTargets;
    ::ll::TypedStorage<8, 32, ::std::string>                mOffer;
    ::ll::TypedStorage<1, 1, ::ShowStoreOfferRedirectType>  mRedirectType;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static void setup(::CommandRegistry& registry);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif


#endif // @header-generator platform
    // NOLINTEND
};
