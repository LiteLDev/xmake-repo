#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

namespace SharedTypes::Legacy::BlockDescriptorSerializer {

struct BlockDescriptorProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::UntypedStorage<8, 24>            mStates;
    ::ll::TypedStorage<8, 24, std::string> mTags;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::BlockDescriptorSerializer
