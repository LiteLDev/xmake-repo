#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct ProfilerEvents; }
namespace bx { class RingBufferControl; }
// clang-format on

namespace bgfx::gl {

struct TimerQueryGL {
public:
    // TimerQueryGL inner types declare
    // clang-format off
    struct Result;
    struct Query;
    // clang-format on

    // TimerQueryGL inner types define
    struct Result {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> m_begin;
        ::ll::TypedStorage<8, 8, ulong> m_end;
        ::ll::TypedStorage<4, 4, uint>  m_pending;
        ::ll::TypedStorage<4, 4, uint>  m_frameNum;
        // NOLINTEND
    };

    struct Query {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> m_begin;
        ::ll::TypedStorage<4, 4, uint> m_end;
        ::ll::TypedStorage<4, 4, uint> m_resultIdx;
        ::ll::TypedStorage<4, 4, uint> m_frameNum;
        ::ll::TypedStorage<1, 1, bool> m_ready;
        ::ll::TypedStorage<8, 8, long> m_cpuTime;
        ::ll::TypedStorage<8, 8, long> m_cpuTicks;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 6168, ::bgfx::gl::TimerQueryGL::Result[257]>  m_result;
    ::ll::TypedStorage<8, 40960, ::bgfx::gl::TimerQueryGL::Query[1024]> m_query;
    ::ll::UntypedStorage<4, 16>                                         m_control;
    ::ll::TypedStorage<4, 4, uint>                                      m_pendingQueryLimit;
    ::ll::TypedStorage<8, 8, ::bgfx::ProfilerEvents&>                   m_profilerEvents;
    ::ll::TypedStorage<8, 8, long>                                      m_syncCPUTimestamp;
    ::ll::UntypedStorage<8, 8>                                          m_syncGPUTimestamp;
    ::ll::TypedStorage<8, 8, long>                                      m_syncCPUTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    TimerQueryGL& operator=(TimerQueryGL const&);
    TimerQueryGL(TimerQueryGL const&);
    TimerQueryGL();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint begin(uint, uint, bool);

    MCNAPI bool update();
    // NOLINTEND
};

} // namespace bgfx::gl
