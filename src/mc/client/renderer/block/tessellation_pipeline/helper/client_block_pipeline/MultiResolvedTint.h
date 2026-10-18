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

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MultiResolvedTint : public ::ClientBlockPipeline::IResolvedTint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::Color> const> mTints;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar> const>        mTintIndexes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color const& get(int materialInstanceId, uchar facing) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color const& $get(int materialInstanceId, uchar facing) const;
    // NOLINTEND
};
#else // @header-generator platform
struct MultiResolvedTint {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
