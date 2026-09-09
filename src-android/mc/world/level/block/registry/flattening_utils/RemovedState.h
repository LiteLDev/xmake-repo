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
    ::ll::TypedStorage<8, 24, std::string const> mName;
    // NOLINTEND

public:
    // prevent constructor by default
    RemovedState();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RemovedState();

    virtual void addValue(::CompoundTag const&) = 0;

    virtual void match(::CompoundTagUpdaterNodeBuilder&, ulong) const = 0;

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
    // NOLINTEND
};

} // namespace FlatteningUtils
