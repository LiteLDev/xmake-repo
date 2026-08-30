#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/BufferType.h"
#include "mc/deps/renderer/hal/enums/MapType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
// clang-format on

namespace mce {

class BufferBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::mce::BufferType> mBufferType;
    ::ll::TypedStorage<4, 4, uint>              mStride;
    ::ll::TypedStorage<4, 4, uint>              mCount;
    ::ll::TypedStorage<4, 4, uint>              mInternalSize;
    ::ll::TypedStorage<4, 4, uint>              mBufferOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferBase& operator=(BufferBase const&);
    BufferBase(BufferBase const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BufferBase();

    MCNAPI BufferBase(::mce::BufferBase&&);

    MCNAPI void createBuffer(::mce::RenderContext&, uint const, void const* const, uint const, ::mce::BufferType const);

    MCNAPI void
    createDynamicBuffer(::mce::RenderContext&, uint const, void const* const, uint const, ::mce::BufferType const);

    MCNAPI ::mce::BufferBase& operator=(::mce::BufferBase&&);

    MCNAPI ~BufferBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::BufferBase&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
