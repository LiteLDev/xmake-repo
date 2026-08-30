#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_descriptor_serializer/StatesProxy.h"
#include "mc/world/level/block/block_descriptor_serializer/TagsProxy.h"

namespace BlockDescriptorSerializer {

struct BlockDescriptorProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                              mName;
    ::ll::TypedStorage<8, 24, ::BlockDescriptorSerializer::StatesProxy> mStates;
    ::ll::TypedStorage<8, 24, ::BlockDescriptorSerializer::TagsProxy>   mTags;
    // NOLINTEND
};

} // namespace BlockDescriptorSerializer
