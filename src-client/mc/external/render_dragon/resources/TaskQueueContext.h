#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/mpmc__Sender.h"

// auto generated forward declare list
// clang-format off
namespace dragon::texturestreaming { template<typename T0> class TextureStreamingManager; }
// clang-format on

namespace dragon {

struct TaskQueueContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>     queue;
    ::ll::UntypedStorage<8, 16>     mTextureStreamingManager;
    ::ll::TypedStorage<8, 8, ulong> mAllTexturesMemoryBudget;
    ::ll::TypedStorage<8, 8, ulong> mSingleMipDefaultMemoryBudget;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskQueueContext& operator=(TaskQueueContext const&);
    TaskQueueContext(TaskQueueContext const&);
    TaskQueueContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TaskQueueContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
