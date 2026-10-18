#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        StateListNode();

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // static variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static ::BlockState::StateListNode*& mHead();
#else // @header-generator platform
        MCAPI static ::BlockState::StateListNode*& mHead();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong const>                  mID;
    ::ll::TypedStorage<8, 8, ulong const>                  mVariationCount;
    ::ll::TypedStorage<8, 40, ::HashedString const>        mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64 const>                 mID;
    ::ll::TypedStorage<8, 8, uint64 const>                 mVariationCount;
    ::ll::TypedStorage<8, 48, ::HashedString const>        mName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 24, ::BlockState::StateListNode> mNode;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BlockState();
#else // @header-generator platform
    constexpr BlockState(
        uint64                             id,
        uint64                             variationCount,
        ::HashedString const&              name,
        ::BlockState::StateListNode const& node
    )
    : mID(id),
      mVariationCount(variationCount),
      mName(name),
      mNode(node) {}
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockState();
#else // @header-generator platform
    virtual ~BlockState() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Tag> _toNBT(int) const = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Tag> _toNBT(int val) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<int> _fromNBT(::Tag const&) const = 0;
#else // @header-generator platform
    virtual ::std::optional<int> _fromNBT(::Tag const& tag) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void toNBT(::CompoundTag& tag, int val) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
