#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/IResolvedTint.h"
#include "mc/deps/core/math/Color.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/IResolvedTint.h"
#include "mc/deps/core/math/Color.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct SingleResolvedTint : public ::ClientBlockPipeline::IResolvedTint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color const> mTint;
    // NOLINTEND

public:
    // prevent constructor by default
    SingleResolvedTint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SingleResolvedTint();

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SingleResolvedTint : public ::ClientBlockPipeline::IResolvedTint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color const> mTint;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color const& get(int, uchar) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::mce::Color const& $get(int, uchar) const;
    // NOLINTEND
};
#else // @header-generator platform
struct SingleResolvedTint {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
