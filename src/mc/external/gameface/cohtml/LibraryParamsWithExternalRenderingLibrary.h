#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct LibraryParamsWithExternalRenderingLibrary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb3340f;
    ::ll::UntypedStorage<8, 8> mUnk5c8f3d;
    ::ll::UntypedStorage<4, 4> mUnk342cd0;
    ::ll::UntypedStorage<8, 8> mUnke5ff9c;
    ::ll::UntypedStorage<8, 8> mUnkd785e9;
    ::ll::UntypedStorage<8, 8> mUnk5465d2;
    ::ll::UntypedStorage<8, 8> mUnk59b879;
    ::ll::UntypedStorage<8, 8> mUnk1fc37b;
    ::ll::UntypedStorage<1, 1> mUnke4bee9;
    ::ll::UntypedStorage<1, 1> mUnk53e687;
    ::ll::UntypedStorage<1, 1> mUnk2b1593;
    ::ll::UntypedStorage<8, 8> mUnka0a22c;
    ::ll::UntypedStorage<4, 4> mUnk4bd6ed;
    ::ll::UntypedStorage<8, 8> mUnk5db356;
    ::ll::UntypedStorage<8, 8> mUnkb82e41;
    ::ll::UntypedStorage<8, 8> mUnk15bbcc;
    ::ll::UntypedStorage<1, 1> mUnk8fc45d;
    ::ll::UntypedStorage<8, 8> mUnk80c01f;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryParamsWithExternalRenderingLibrary& operator=(LibraryParamsWithExternalRenderingLibrary const&);
    LibraryParamsWithExternalRenderingLibrary(LibraryParamsWithExternalRenderingLibrary const&);
    LibraryParamsWithExternalRenderingLibrary();
};
#else // @header-generator platform
struct LibraryParamsWithExternalRenderingLibrary {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
