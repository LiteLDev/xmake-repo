#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorkerPool;
#if defined(LL_PLAT_A) // @header-generator platform
struct AllWorkerConfigurations;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class MinecraftWorkerPool {
public:
    // MinecraftWorkerPool inner types define
    enum class UseAsyncOrDiskPoolForLoading : int {
#if defined(LL_PLAT_A) // @header-generator platform
        USE_ASYNC = 0,
        USE_DISK  = 1,
#else // @header-generator platform
        Async = 0,
        Disk  = 1,
#endif // @header-generator platform
    };

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void configureGamefaceThread();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static void configureGamefaceThread();
#endif
#endif // @header-generator platform

    MCNAPI static void configureMainThread();

    MCNAPI static void configureServerThread();

    MCNAPI static void createSingletons();

    MCNAPI static void destroySingletons();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::WorkerPool& getASYNCOrDISKWorkerPoolForLoading();

    MCNAPI static std::optional<AllWorkerConfigurations> const getAllWorkerConfigurations();

    MCNAPI static ulong getAudioThreadMask();

    MCNAPI static void loadWorkerConfigurations(uint, uint);
#else // @header-generator platform
    MCNAPI static void loadWorkerConfigurations(uint highPowerCores, uint totalCores);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<WorkerPool>& ASYNC();
#else // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& ASYNC();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<WorkerPool>& CONNECTEDSTORAGE();
#else // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& CONNECTEDSTORAGE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<WorkerPool>& DISK();
#else // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& DISK();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<WorkerPool>& GAMEFACE_LAYOUT();
#else // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& GAMEFACE_LAYOUT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<WorkerPool>& INPUT();
#else // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& INPUT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<WorkerPool>& LEVELDB();
#else // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& LEVELDB();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<WorkerPool>& LEVELDB_COMPACTION();
#else // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& LEVELDB_COMPACTION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<WorkerPool>& NETWORK();
#else // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& NETWORK();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<WorkerPool>& RENDERING();
#else // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& RENDERING();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<WorkerPool>& RENDERING_HELPERS();
#else // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& RENDERING_HELPERS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<WorkerPool>& WATCHDOG();
#else // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& WATCHDOG();
#endif // @header-generator platform
    // NOLINTEND
};
