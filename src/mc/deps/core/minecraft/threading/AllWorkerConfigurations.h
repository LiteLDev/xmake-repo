#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/ThreadConfiguration.h"
#include "mc/deps/core/minecraft/threading/WorkerConfiguration.h"
#else // @header-generator platform
#endif // @header-generator platform

struct AllWorkerConfigurations {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::ThreadConfiguration> MainThread;
    ::ll::TypedStorage<8, 32, ::ThreadConfiguration> ServerThread;
    ::ll::TypedStorage<8, 32, ::ThreadConfiguration> AudioThreads;
    ::ll::TypedStorage<8, 32, ::ThreadConfiguration> GamefaceThreads;
    ::ll::TypedStorage<8, 32, ::WorkerConfiguration> Async;
    ::ll::TypedStorage<8, 32, ::WorkerConfiguration> Disk;
    ::ll::TypedStorage<8, 32, ::WorkerConfiguration> Network;
    ::ll::TypedStorage<8, 32, ::WorkerConfiguration> Rendering;
    ::ll::TypedStorage<8, 32, ::WorkerConfiguration> LevelDB;
    ::ll::TypedStorage<8, 32, ::WorkerConfiguration> LevelDBCompaction;
    ::ll::TypedStorage<8, 32, ::WorkerConfiguration> ConnectedStorage;
    ::ll::TypedStorage<8, 32, ::WorkerConfiguration> Watchdog;
    ::ll::TypedStorage<8, 32, ::WorkerConfiguration> Input;
    ::ll::TypedStorage<8, 32, ::WorkerConfiguration> GamefaceLayout;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk71d75e;
    ::ll::UntypedStorage<8, 32> mUnk6d61e1;
    ::ll::UntypedStorage<8, 32> mUnkb54883;
    ::ll::UntypedStorage<8, 32> mUnk8fa6d6;
    ::ll::UntypedStorage<8, 40> mUnk406c2b;
    ::ll::UntypedStorage<8, 40> mUnkf23eb5;
    ::ll::UntypedStorage<8, 40> mUnk39f36e;
    ::ll::UntypedStorage<8, 40> mUnkdc6df0;
    ::ll::UntypedStorage<8, 40> mUnk4c241b;
    ::ll::UntypedStorage<8, 40> mUnk8900fd;
    ::ll::UntypedStorage<8, 40> mUnk5df57d;
    ::ll::UntypedStorage<8, 40> mUnkbf2915;
    ::ll::UntypedStorage<8, 40> mUnke48668;
    ::ll::UntypedStorage<8, 40> mUnkabe22f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AllWorkerConfigurations& operator=(AllWorkerConfigurations const&);
    AllWorkerConfigurations(AllWorkerConfigurations const&);
    AllWorkerConfigurations();
#endif // @header-generator platform
};
