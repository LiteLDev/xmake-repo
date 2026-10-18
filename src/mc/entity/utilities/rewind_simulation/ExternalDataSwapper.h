#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityRegistry;
struct ExternalDataComponent;
struct ExternalDataInterface;
struct ExternalDataSnapshot;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace RewindSimulation {

class ExternalDataSwapper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ExternalDataComponent*>               mExposedData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ExternalDataInterface>> mOriginalData;
    ::ll::TypedStorage<8, 8, ::EntityRegistry&>                      mRegistry;
    ::ll::TypedStorage<8, 8, ::ExternalDataSnapshot*>                mSnapshot;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk715c15;
    ::ll::UntypedStorage<8, 8> mUnk35b1b9;
    ::ll::UntypedStorage<8, 8> mUnkbe32a4;
    ::ll::UntypedStorage<8, 8> mUnk6bac2b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalDataSwapper& operator=(ExternalDataSwapper const&);
    ExternalDataSwapper(ExternalDataSwapper const&);
    ExternalDataSwapper();
};

} // namespace RewindSimulation
