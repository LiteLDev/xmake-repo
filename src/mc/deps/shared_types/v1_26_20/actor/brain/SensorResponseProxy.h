#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/actor/brain/MemorySetterDefinition.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
namespace SharedTypes::v1_26_20::Brain { struct MemorySetterDefinition; }
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct SensorResponseProxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                        mEventName;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_20::Brain::MemorySetterDefinition>> mSetters;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                        mEventName;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_20::Brain::MemorySetterDefinition>> mSetters;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SensorResponseProxy(::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseProxy const&);

    MCNAPI ::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseProxy&
    operator=(::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseProxy&&);

    MCNAPI bool operator==(::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseProxy const&) const;

    MCNAPI ~SensorResponseProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseProxy const&);
#else // @header-generator platform
    MCAPI ~SensorResponseProxy();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
