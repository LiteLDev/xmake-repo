#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandItem.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
#if defined(LL_PLAT_A) // @header-generator platform
class CommandRegistry;
class Recipe;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class RecipesForCommand : public ::Command {
public:
    // RecipesForCommand inner types declare
    // clang-format off
    struct FurnaceRecipe;
    // clang-format on

    // RecipesForCommand inner types define
    struct FurnaceRecipe {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, ::HashedString const>  mFurnaceTag;
#else // @header-generator platform
        ::ll::TypedStorage<8, 48, ::HashedString const>  mFurnaceTag;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 128, ::ItemInstance const> mIngredient;
        ::ll::TypedStorage<8, 128, ::ItemInstance const> mOutput;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CommandItem> mItem;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
