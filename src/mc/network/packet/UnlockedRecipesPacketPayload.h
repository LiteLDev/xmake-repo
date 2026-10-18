#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UnlockedRecipesPacketPayload {
public:
    // UnlockedRecipesPacketPayload inner types define
    enum class PacketType : uint {
        Empty                    = 0,
        InitiallyUnlockedRecipes = 1,
        NewlyUnlockedRecipes     = 2,
        RemoveUnlockedRecipes    = 3,
        RemoveAllUnlockedRecipes = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::UnlockedRecipesPacketPayload::PacketType> mPacketType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                  mUnlockedRecipes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UnlockedRecipesPacketPayload();

    MCNAPI ~UnlockedRecipesPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>              mUnlockedRecipes;
#endif // @header-generator platform
    // NOLINTEND
};
