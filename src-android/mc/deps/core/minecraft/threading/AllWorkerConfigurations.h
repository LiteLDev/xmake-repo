#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/ThreadConfiguration.h"
#include "mc/deps/core/minecraft/threading/WorkerConfiguration.h"

struct AllWorkerConfigurations {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
