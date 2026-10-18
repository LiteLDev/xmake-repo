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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ListTag>> mEnumValues;
    ::ll::UntypedStorage<8, 80>                        mHashIndexMap;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ListTag>>               mEnumValues;
    ::ll::TypedStorage<8, 128, ::BidirectionalUnorderedMap<int, uint64>> mHashIndexMap;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CustomBlockStateVariant();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CustomBlockStateVariant();
#else // @header-generator platform
    virtual ~CustomBlockStateVariant() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Tag> _toNBT(int) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Tag> _toNBT(int val) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<int> _fromNBT(::Tag const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<int> _fromNBT(::Tag const& tag) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Tag> $_toNBT(int) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Tag> $_toNBT(int val) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<int> $_fromNBT(::Tag const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::optional<int> $_fromNBT(::Tag const& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
