#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/RendererType.h"
#include "mc/external/bgfx/Resolution.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct CallbackI; }
namespace bgfx { struct TestingCallbackI; }
namespace bx { class AllocatorI; }
namespace bx { struct AllocatorI; }
// clang-format on

namespace bgfx {

struct Init {
public:
    // Init inner types declare
    // clang-format off
    struct Limits;
    // clang-format on

    // Init inner types define
    enum DebugConfig : uint {
        // bitfield representation
        GPU_VALIDATION                        = 1u << 0,
        LOAD_RENDERDOCDLL                     = 1u << 1,
        REPORT_LIVE_DEVICE_OBJECTS            = 1u << 2,
        GPU_VALIDATION_VERBOSE                = 1u << 3,
        GPU_VALIDATION_OUTPUT_MANAGER         = 1u << 4,
        GPU_VALIDATION_DISABLE_ERROR_SUPPRESS = 1u << 5,
        ENABLE_BX_TRACE                       = 1u << 6,
        DEBUG_ALL                             = GPU_VALIDATION | REPORT_LIVE_DEVICE_OBJECTS,
    };

    struct Limits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> maxEncoders;
        ::ll::TypedStorage<4, 4, uint>   transientVbSize;
        ::ll::TypedStorage<4, 4, uint>   transientIbSize;
        ::ll::TypedStorage<1, 1, uchar>  maxRendererWorkers;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>                          type;
    ::ll::TypedStorage<2, 2, ushort>                    vendorId;
    ::ll::TypedStorage<2, 2, ushort>                    deviceId;
    ::ll::TypedStorage<1, 1, uchar>                     debug;
    ::ll::TypedStorage<1, 1, bool>                      profile;
    ::ll::TypedStorage<4, 12, ::bgfx::Resolution>       resolution;
    ::ll::TypedStorage<4, 16, ::bgfx::Init::Limits>     limits;
    ::ll::TypedStorage<8, 8, ::bgfx::CallbackI*>        callback;
    ::ll::TypedStorage<8, 8, ::bx::AllocatorI*>         allocator;
    ::ll::TypedStorage<8, 8, ::bgfx::TestingCallbackI*> testingCallback;
    // NOLINTEND
};

} // namespace bgfx
