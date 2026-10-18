#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class CompoundTagUpdaterNodeBuilder;
// clang-format on

namespace FlatteningUtils {

class RemovedState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const> mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string const> mName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    RemovedState();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RemovedState();
#else // @header-generator platform
    virtual ~RemovedState() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addValue(::CompoundTag const&) = 0;
#else // @header-generator platform
    virtual void addValue(::CompoundTag const& tag) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void match(::CompoundTagUpdaterNodeBuilder&, ulong) const = 0;
#else // @header-generator platform
    virtual void match(::CompoundTagUpdaterNodeBuilder& builder, uint64 index) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong valueCount() const = 0;
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
#else // @header-generator platform
    virtual uint64 valueCount() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace FlatteningUtils
