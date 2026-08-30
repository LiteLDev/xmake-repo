#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/ConstantBufferObject.h"

// auto generated forward declare list
// clang-format off
namespace renoir { struct BackendCommandOffset; }
namespace renoir { struct BackendResourceCommandOffset; }
// clang-format on

namespace renoir {

class RendererBackend {
public:
    // RendererBackend inner types declare
    // clang-format off
    struct BackendCommandsBuffer;
    struct ConstantBufferUpdateData;
    struct BackendResourceCommandsBuffer;
    // clang-format on

    // RendererBackend inner types define
    enum GPUPerfTimingResult : uint {
        GPTR_Ok         = 0,
        GPTR_Incomplete = 1,
        GPTR_Failed     = 2,
    };

    struct BackendCommandsBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::renoir::BackendCommandOffset const*> Offsets;
        ::ll::TypedStorage<8, 8, void const*>                           Commands;
        ::ll::TypedStorage<4, 4, uint>                                  Count;
        ::ll::TypedStorage<4, 4, uint>                                  CommandsDataSize;
        // NOLINTEND
    };

    struct ConstantBufferUpdateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 8>            Object;
        ::ll::TypedStorage<8, 8, void const*> Data;
        ::ll::TypedStorage<4, 4, uint>        DataSize;
        // NOLINTEND
    };

    struct BackendResourceCommandsBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::renoir::BackendResourceCommandOffset const*> Offsets;
        ::ll::TypedStorage<8, 8, void const*>                                   Commands;
        ::ll::TypedStorage<4, 4, uint>                                          Count;
        // NOLINTEND
    };
};

} // namespace renoir
