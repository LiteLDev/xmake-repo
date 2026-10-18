#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/registry/flattening_utils/RemovedState.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class CompoundTagUpdaterNodeBuilder;
// clang-format on

namespace FlatteningUtils {

class RemovedIntState : public ::FlatteningUtils::RemovedState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<int>> mValues;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mValues;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RemovedIntState();
#else // @header-generator platform
    virtual void addValue(::CompoundTag const& tag) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addValue(::CompoundTag const&);
#else // @header-generator platform
    virtual void match(::CompoundTagUpdaterNodeBuilder& builder, uint64 index) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void match(::CompoundTagUpdaterNodeBuilder&, ulong) const;

    virtual ulong valueCount() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual uint64 valueCount() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addValue(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void $addValue(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $match(::CompoundTagUpdaterNodeBuilder&, ulong) const;
#else // @header-generator platform
    MCFOLD void $match(::CompoundTagUpdaterNodeBuilder& builder, uint64 index) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $valueCount() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD uint64 $valueCount() const;
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

} // namespace FlatteningUtils
