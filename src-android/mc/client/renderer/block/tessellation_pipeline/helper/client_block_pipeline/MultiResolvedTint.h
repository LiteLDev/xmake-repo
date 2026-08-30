#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/IResolvedTint.h"
#include "mc/deps/core/math/Color.h"

namespace ClientBlockPipeline {

struct MultiResolvedTint : public ::ClientBlockPipeline::IResolvedTint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<mce::Color> const> mTints;
    ::ll::TypedStorage<8, 24, std::vector<uchar> const>      mTintIndexes;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiResolvedTint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultiResolvedTint();

    virtual ::mce::Color const& get(int, uchar) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color const& $get(int, uchar) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
