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
    ::ll::UntypedStorage<1, 1>                         mType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ListTag>> mEnumValues;
    ::ll::UntypedStorage<8, 80>                        mHashIndexMap;
    ::ll::TypedStorage<8, 8, ::BlockState const&>      mBlockState;
    ::ll::TypedStorage<8, 24, std::string>             mName;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateMeta& operator=(BlockStateMeta const&);
    BlockStateMeta(BlockStateMeta const&);
    BlockStateMeta();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockStateMeta(::BlockState const&, ::BlockStateDefinition const&);

    MCNAPI bool const getBool(int) const;

    MCNAPI ulong getID() const;

    MCNAPI int const getInt(int) const;

    MCNAPI std::string const& getName() const;

    MCNAPI ::BlockState const& getState() const;

    MCNAPI std::string const& getString(int) const;

    MCNAPI ::Tag::Type const getType() const;

    MCNAPI int indexOf(ulong const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockState const&, ::BlockStateDefinition const&);
    // NOLINTEND
};
