#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/CpuRingBufferAllocator.h"
#include "mc/external/render_dragon/bgfx_impl/GPUState.h"
#include "mc/external/render_dragon/frame_renderer/systems/PreparedDraw.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
// clang-format on

namespace dragon::framerenderer {

class StateFlagPreparedDraws {
public:
    // StateFlagPreparedDraws inner types define
    using DrawList = ::gsl::span<const dragon::framerenderer::PreparedDraw>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::dragon::bgfximpl::GPUState> mGPUState;
    ::ll::UntypedStorage<8, 32>                             mPreparedDraws;
    // NOLINTEND

public:
    // prevent constructor by default
    StateFlagPreparedDraws& operator=(StateFlagPreparedDraws const&);
    StateFlagPreparedDraws();
};

} // namespace dragon::framerenderer
