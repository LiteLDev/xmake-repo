#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class BlockState;
class BlockStateMeta;
class BlockType;
class CustomBlockStateVariant;
struct BlockStateDefinition;
namespace Json { class Value; }
// clang-format on

class BlockStateGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<CustomBlockStateVariant>>> mRegisteredBlockStates;
    ::ll::UntypedStorage<8, 80>                                                      mHashNames;
    ::ll::UntypedStorage<8, 80>                                                      mIdNames;
    ::ll::TypedStorage<8, 24, std::map<int, std::unique_ptr<BlockStateMeta>>>        mBlockStates;
    ::ll::TypedStorage<8, 24, std::map<int, std::unique_ptr<BlockStateMeta>>>        mJsonBlockStates;
    ::ll::TypedStorage<8, 8, ulong>                                                  lastStateID;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockStateGroup();

    MCNAPI ::BlockStateMeta const* getBlockStateFromHash(ulong const&) const;

    MCNAPI ::BlockStateMeta const* getBlockStateFromName(std::string const&) const;

    MCNAPI void registerBlockStateDefinition(::BlockStateDefinition const&);

    MCNAPI void registerExistingBlockState(::BlockState const&);

    MCNAPI void registerToBlock(::BlockType&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool loadBlockStateFromJson(::BlockStateDefinition&, std::string const&, ::Json::Value const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_ENUM_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
