#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

namespace SharedTypes::Legacy::BlockDescriptorSerializer {

struct BlockDescriptorProxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::UntypedStorage<8, 24>            mStates;
    ::ll::TypedStorage<8, 24, std::string> mTags;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                                               mName;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::SharedTypes::Legacy::BlockDescriptor::Compound>> mStates;
    ::ll::TypedStorage<8, 32, ::std::string>                                                               mTags;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::BlockDescriptorSerializer
