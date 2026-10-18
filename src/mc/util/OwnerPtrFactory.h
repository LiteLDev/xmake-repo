#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#endif // @header-generator platform

template <typename T0, typename T1>
#if defined(LL_PLAT_A) // @header-generator platform
class OwnerPtrFactory {};
#else // @header-generator platform
class OwnerPtrFactory {
public:
    using FactoryMap = std::unordered_map<std::string, std::function<OwnerPtr<T0>(T1)>>;
    FactoryMap mFactoryMap;

    MCAPI void registerFactory(std::string const&, std::function<OwnerPtr<T0>(T1)>);
};
#endif // @header-generator platform no-eol
