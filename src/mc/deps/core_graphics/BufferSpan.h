#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/BufferDescription.h"

namespace cg {

struct BufferSpan {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::cg::BufferDescription> mDescription;
    ::ll::TypedStorage<8, 8, uchar const*>            mData;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BufferSpan();

    MCNAPI BufferSpan(::cg::BufferDescription const&, std::optional<const uchar*>);

    MCNAPI BufferSpan(uint const, uint const, std::optional<const uchar*>);

    MCNAPI ::gsl::span<const uchar> getSpan() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cg::BufferDescription const&, std::optional<const uchar*>);

    MCNAPI void* $ctor(uint const, uint const, std::optional<const uchar*>);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace cg
