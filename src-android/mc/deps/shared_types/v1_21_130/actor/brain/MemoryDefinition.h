#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryType.h"

namespace SharedTypes::v1_21_130::Brain {

struct MemoryDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
    ::ll::UntypedStorage<1, 1>                mType;
    ::ll::TypedStorage<1, 1, bool>            mPersists;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::Brain
