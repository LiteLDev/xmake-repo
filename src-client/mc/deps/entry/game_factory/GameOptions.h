#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IAppInitializer;
struct MinecraftGameArguments;
// clang-format on

namespace GameFactory {

struct GameOptions {
public:
    // GameOptions inner types define
    using MinecraftGameArgumentsVisitor =
        ::brstd::function_ref<void(MinecraftGameArguments&&) const, void(MinecraftGameArguments&&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>               mSetInitStepToRestartOn;
    ::ll::TypedStorage<8, 8, ::IAppInitializer*> mInitializer;
    ::ll::UntypedStorage<8, 64>                  mVisitGameArguments;
    // NOLINTEND
};

} // namespace GameFactory
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
