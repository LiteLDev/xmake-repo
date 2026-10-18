#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/Tag.h"
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class BlockState;
class ListTag;
struct BlockStateDefinition;
// clang-format on

class BlockStateMeta {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1>                         mType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ListTag>> mEnumValues;
    ::ll::UntypedStorage<8, 80>                        mHashIndexMap;
    ::ll::TypedStorage<8, 8, ::BlockState const&>      mBlockState;
    ::ll::TypedStorage<8, 24, std::string>             mName;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Tag::Type>                                mType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ListTag>>               mEnumValues;
    ::ll::TypedStorage<8, 128, ::BidirectionalUnorderedMap<int, uint64>> mHashIndexMap;
    ::ll::TypedStorage<8, 8, ::BlockState const&>                        mBlockState;
    ::ll::TypedStorage<8, 32, ::std::string>                             mName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateMeta& operator=(BlockStateMeta const&);
    BlockStateMeta(BlockStateMeta const&);
    BlockStateMeta();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockStateMeta(::BlockState const&, ::BlockStateDefinition const&);
#else // @header-generator platform
    MCAPI BlockStateMeta(::BlockState const& blockState, ::BlockStateDefinition const& def);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool const getBool(int) const;
#else // @header-generator platform
    MCAPI bool const getBool(int index) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getID() const;
#else // @header-generator platform
    MCAPI int const getInt(int index) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int const getInt(int) const;

    MCNAPI std::string const& getName() const;

    MCNAPI ::BlockState const& getState() const;

    MCNAPI std::string const& getString(int) const;

    MCNAPI ::Tag::Type const getType() const;

    MCNAPI int indexOf(ulong const&) const;
#else // @header-generator platform
    MCAPI ::std::string const& getString(int index) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockState const&, ::BlockStateDefinition const&);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockState const& blockState, ::BlockStateDefinition const& def);
#endif // @header-generator platform
    // NOLINTEND
};
