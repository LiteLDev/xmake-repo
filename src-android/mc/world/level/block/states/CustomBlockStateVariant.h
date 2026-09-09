#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/level/block/states/BlockState.h"

// auto generated forward declare list
// clang-format off
class ListTag;
class Tag;
// clang-format on

class CustomBlockStateVariant : public ::BlockState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ListTag>> mEnumValues;
    ::ll::UntypedStorage<8, 80>                        mHashIndexMap;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomBlockStateVariant();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomBlockStateVariant();

    virtual std::unique_ptr<Tag> _toNBT(int) const;

    virtual std::optional<int> _fromNBT(::Tag const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<Tag> $_toNBT(int) const;

    MCNAPI std::optional<int> $_fromNBT(::Tag const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
