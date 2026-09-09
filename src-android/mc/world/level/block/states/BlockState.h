#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Tag;
// clang-format on

class BlockState {
public:
    // BlockState inner types declare
    // clang-format off
    struct StateListNode;
    // clang-format on

    // BlockState inner types define
    struct StateListNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockState::StateListNode*> mNext;
        ::ll::TypedStorage<8, 8, ::BlockState::StateListNode*> mPrev;
        ::ll::TypedStorage<8, 8, ::BlockState const*>          mState;
        // NOLINTEND

    public:
        // prevent constructor by default
        StateListNode();

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::BlockState::StateListNode*& mHead();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong const>                  mID;
    ::ll::TypedStorage<8, 8, ulong const>                  mVariationCount;
    ::ll::TypedStorage<8, 40, ::HashedString const>        mName;
    ::ll::TypedStorage<8, 24, ::BlockState::StateListNode> mNode;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockState();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockState();

    virtual std::unique_ptr<Tag> _toNBT(int) const = 0;

    virtual std::optional<int> _fromNBT(::Tag const&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<int> fromNBT(::CompoundTag const&) const;

    MCNAPI void toNBT(::CompoundTag&, int) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void forEachState(::brstd::function_ref<bool(const BlockState&)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
