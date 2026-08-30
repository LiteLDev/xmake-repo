#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/atomic_client_entity/AtomicClientEntityDefinitions.h"
#include "mc/deps/shared_types/beta/atomic_client_entity/AtomicClientEntityDescription.h"

namespace SharedTypes::Beta::AtomicClientEntity {

struct AtomicClientEntityDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 264, ::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDescription> mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDefinitions>  mDefinitions;
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity
