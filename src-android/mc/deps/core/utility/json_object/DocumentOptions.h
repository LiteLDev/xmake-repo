#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Memory { class IMemoryAllocator; }
// clang-format on

namespace Bedrock::JSONObject {

class DocumentOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*>                                mFixedBlock;
    ::ll::TypedStorage<8, 8, ::Bedrock::Memory::IMemoryAllocator*> mAllocator;
    ::ll::TypedStorage<8, 8, char*>                                mInSituBuffer;
    ::ll::TypedStorage<4, 4, uint>                                 mFixedBlockLength;
    ::ll::TypedStorage<1, 1, bool>                                 mAllowDynamicAllocation;
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
