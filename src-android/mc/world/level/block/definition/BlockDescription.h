#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/VanillaBlockData.h"
#include "mc/world/level/block/definition/BlockMenuCategory.h"
#include "mc/world/level/block/definition/BlockStateDefinition.h"
#include "mc/world/level/block/traits/block_trait/ITrait.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgradeSet;
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
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<BlockTrait::ITrait>>> mMap;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                mIdentifier;
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_26_20::BlockDefinition::VanillaBlockData> mVanillaBlockData;
    ::ll::TypedStorage<8, 24, std::vector<BlockStateDefinition>>                          mStates;
    ::ll::TypedStorage<8, 32, ::BlockMenuCategory>                                        mMenuCategory;
    ::ll::TypedStorage<8, 40, ::BlockDescription::BlockTraits>                            mTraits;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsBaseGameBlock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockDescription(::BlockDescription const&);

    MCNAPI ::BlockDescription& operator=(::BlockDescription&&);

    MCNAPI ::BlockDescription& operator=(::BlockDescription const&);

    MCNAPI ~BlockDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
