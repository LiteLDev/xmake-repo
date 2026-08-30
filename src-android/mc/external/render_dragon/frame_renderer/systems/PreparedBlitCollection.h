#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/CpuRingBufferAllocator.h"
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/external/render_dragon/frame_renderer/systems/PreparedBlits.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon::bgfximpl { struct GPUState; }
namespace dragon::framerenderer { struct PreparedDraw; }
// clang-format on

namespace dragon::framerenderer {

class PreparedBlitCollection {
public:
    // PreparedBlitCollection inner types define
    using BlitList = ::gsl::span<const dragon::framerenderer::PreparedBlits>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mPreparedBlits;
    // NOLINTEND

public:
    // prevent constructor by default
    PreparedBlitCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PreparedBlitCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::framerenderer
