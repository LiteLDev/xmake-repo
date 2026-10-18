#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/VanillaBlockData.h"
#include "mc/world/level/block/definition/BlockMenuCategory.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/definition/BlockStateDefinition.h"
#include "mc/world/level/block/traits/block_trait/ITrait.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CerealSchemaUpgradeSet;
#else // @header-generator platform
struct BlockStateDefinition;
namespace BlockTrait { class ITrait; }
#endif // @header-generator platform
// clang-format on

struct BlockDescription {
public:
    // BlockDescription inner types declare
    // clang-format off
    struct BlockTraits;
    // clang-format on

    // BlockDescription inner types define
    struct BlockTraits {
    public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        // BlockTraits inner types define
        using CerealDefaultValueOptOut = void;

    public:
#endif // @header-generator platform
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<BlockTrait::ITrait>>> mMap;
#else // @header-generator platform
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::BlockTrait::ITrait>>> mMap;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                mIdentifier;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                              mIdentifier;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_26_20::BlockDefinition::VanillaBlockData> mVanillaBlockData;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BlockStateDefinition>>                          mStates;
    ::ll::TypedStorage<8, 32, ::BlockMenuCategory>                                        mMenuCategory;
    ::ll::TypedStorage<8, 40, ::BlockDescription::BlockTraits>                            mTraits;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockStateDefinition>>                      mStates;
    ::ll::TypedStorage<8, 40, ::BlockMenuCategory>                                        mMenuCategory;
    ::ll::TypedStorage<8, 64, ::BlockDescription::BlockTraits>                            mTraits;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                        mIsBaseGameBlock;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    BlockDescription();

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockDescription(::BlockDescription const&);
#else // @header-generator platform
    MCAPI BlockDescription(::BlockDescription const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockDescription& operator=(::BlockDescription&&);
#else // @header-generator platform
    MCAPI ::BlockDescription& operator=(::BlockDescription&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockDescription& operator=(::BlockDescription const&);
#else // @header-generator platform
    MCAPI ::BlockDescription& operator=(::BlockDescription const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BlockDescription();
#else // @header-generator platform
    MCAPI ~BlockDescription();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockDescription const&);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockDescription const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
