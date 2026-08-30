#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/PlatformSpecificParams.h"
#include "mc/external/gameface/cohtml/Severity.h"
#include "mc/external/gameface/cohtml/WorkType.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IAllocator; }
namespace cohtml { class IFileSystemWriter; }
namespace cohtml { class IProfileMarkersTracer; }
namespace cohtml { class IVirtualAllocator; }
namespace cohtml::Logging { class ILogHandler; }
namespace cohtml::Profile { class IPerformanceHandler; }
// clang-format on

namespace cohtml {

struct LibraryParamsWithExternalRenderingLibrary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::IAllocator*>                    Allocator;
    ::ll::TypedStorage<8, 8, ::cohtml::IVirtualAllocator*>             VirtualAllocator;
    ::ll::TypedStorage<4, 4, ::cohtml::Logging::Severity>              LoggingSeverity;
    ::ll::TypedStorage<8, 8, ::cohtml::Logging::ILogHandler*>          LogHandler;
    ::ll::TypedStorage<8, 8, ::cohtml::Profile::IPerformanceHandler*>  PerformanceHandler;
    ::ll::TypedStorage<8, 8, ::cohtml::IProfileMarkersTracer*>         ProfileMarkersTracer;
    ::ll::TypedStorage<8, 8, ::cohtml::IFileSystemWriter*>             FileSystemWriter;
    ::ll::TypedStorage<8, 8, char const*>                              WritableDirectory;
    ::ll::TypedStorage<1, 1, bool>                                     UseDedicatedLayoutThread;
    ::ll::TypedStorage<1, 1, bool>                                     EnableInternalAllocator;
    ::ll::TypedStorage<1, 1, bool>                                     ExposeGC;
    ::ll::TypedStorage<8, 8, char const*>                              ScriptEngineFlags;
    ::ll::TypedStorage<4, 4, uint>                                     ResourceThreadsCountHint;
    ::ll::TypedStorage<8, 8, char const*>                              SharedLibraryLocation;
    ::ll::TypedStorage<8, 8, void (*)(void*, ::cohtml::WorkType, int)> OnWorkAvailable;
    ::ll::TypedStorage<8, 8, void*>                                    OnWorkAvailableUserData;
    ::ll::TypedStorage<8, 8, ::cohtml::PlatformSpecificParams>         PlatformParams;
    ::ll::TypedStorage<8, 8, char const*>                              DefaultStyleFontFamily;
    // NOLINTEND
};

} // namespace cohtml
