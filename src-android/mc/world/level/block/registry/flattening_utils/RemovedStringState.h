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

class RemovedStringState : public ::FlatteningUtils::RemovedState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mValues;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RemovedStringState();

    virtual void addValue(::CompoundTag const&);

    virtual void match(::CompoundTagUpdaterNodeBuilder&, ulong) const;

    virtual ulong valueCount() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addValue(::CompoundTag const&);

    MCNAPI void $match(::CompoundTagUpdaterNodeBuilder&, ulong) const;

    MCNAPI ulong $valueCount() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace FlatteningUtils
