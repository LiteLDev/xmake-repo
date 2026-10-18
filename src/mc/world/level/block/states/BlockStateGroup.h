#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class BlockState;
class BlockStateMeta;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockType;
#else // @header-generator platform
#endif // @header-generator platform
class CustomBlockStateVariant;
struct BlockStateDefinition;
namespace Json { class Value; }
// clang-format on

class BlockStateGroup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<CustomBlockStateVariant>>> mRegisteredBlockStates;
    ::ll::UntypedStorage<8, 80>                                                      mHashNames;
    ::ll::UntypedStorage<8, 80>                                                      mIdNames;
    ::ll::TypedStorage<8, 24, std::map<int, std::unique_ptr<BlockStateMeta>>>        mBlockStates;
    ::ll::TypedStorage<8, 24, std::map<int, std::unique_ptr<BlockStateMeta>>>        mJsonBlockStates;
    ::ll::TypedStorage<8, 8, ulong>                                                  lastStateID;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CustomBlockStateVariant>>> mRegisteredBlockStates;
    ::ll::TypedStorage<8, 128, ::BidirectionalUnorderedMap<uint64, ::std::string>>         mHashNames;
    ::ll::TypedStorage<8, 128, ::BidirectionalUnorderedMap<int, uint64>>                   mIdNames;
    ::ll::TypedStorage<8, 16, ::std::map<int, ::std::unique_ptr<::BlockStateMeta>>>        mBlockStates;
    ::ll::TypedStorage<8, 16, ::std::map<int, ::std::unique_ptr<::BlockStateMeta>>>        mJsonBlockStates;
    ::ll::TypedStorage<8, 8, uint64>                                                       lastStateID;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockStateGroup();
#else // @header-generator platform
    MCAPI BlockStateGroup();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockStateMeta const* getBlockStateFromHash(ulong const&) const;
#else // @header-generator platform
    MCAPI ::BlockStateMeta const* getBlockStateFromHash(uint64 const& h) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockStateMeta const* getBlockStateFromName(std::string const&) const;
#else // @header-generator platform
    MCAPI ::BlockStateMeta const* getBlockStateFromName(::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerBlockStateDefinition(::BlockStateDefinition const&);
#else // @header-generator platform
    MCAPI void registerBlockStateDefinition(::BlockStateDefinition const& def);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerExistingBlockState(::BlockState const&);
#else // @header-generator platform
    MCAPI void registerExistingBlockState(::BlockState const& state);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerToBlock(::BlockType&);
#else // @header-generator platform
    MCAPI ~BlockStateGroup();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool loadBlockStateFromJson(::BlockStateDefinition&, std::string const&, ::Json::Value const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_ENUM_SIZE();
#else // @header-generator platform
    MCAPI static bool
    loadBlockStateFromJson(::BlockStateDefinition& blockState, ::std::string const& name, ::Json::Value const& root);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
