#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/CommandSelectorResults.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class Recipes;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class UnlockRecipeCommand : public ::Command {
public:
    // UnlockRecipeCommand inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum RecipeAction : uint {
#else // @header-generator platform
    enum class RecipeAction : int {
#endif // @header-generator platform
        Give = 0,
        Take = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::UnlockRecipeCommand::RecipeAction> mAction;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200>                                  mPlayers;
    ::ll::TypedStorage<8, 24, std::string>                        mRecipe;
#else // @header-generator platform
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>>       mPlayers;
    ::ll::TypedStorage<8, 32, ::std::string>                      mRecipe;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~UnlockRecipeCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
