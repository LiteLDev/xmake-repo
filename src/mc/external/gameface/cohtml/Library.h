#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/WorkExecutionMode.h"
#include "mc/external/gameface/cohtml/WorkType.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class ScriptCompiler; }
namespace cohtml { class System; }
namespace cohtml { struct GPUMemoryInfo; }
namespace cohtml { struct SystemSettings; }
namespace cohtml { struct UserGPUMemoryInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
class Library {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Library {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Library() = default;

    virtual ::cohtml::System* CreateSystem(::cohtml::SystemSettings const&) = 0;

    virtual void StopWorkers() = 0;

    virtual void Uninitialize(bool) = 0;

    virtual void* GetFeatureInterface(uint) = 0;

    virtual void ExecuteWork(::cohtml::WorkType, ::cohtml::WorkExecutionMode, int) = 0;

    virtual void EnableProfiling(bool, char const*, uint) = 0;

    virtual void* ReservedMethod(void*, void*) = 0;

    virtual ::cohtml::ScriptCompiler* CreateScriptCompiler() = 0;

    virtual ::cohtml::GPUMemoryInfo* GetGPUMemoryStats() const = 0;

    virtual ::cohtml::UserGPUMemoryInfo* GetUserGPUMemoryStats() const = 0;

    virtual void ResetGPUMemoryTrackerPeaks() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class Library {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
