#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/actor/brain/MemorySetterDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct SensorResponseProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                        mEventName;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_20::Brain::MemorySetterDefinition>> mSetters;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
