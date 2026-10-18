#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::Memory { class IMemoryAllocator; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::JSONObject {

class DocumentOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, void*>                                mFixedBlock;
    ::ll::TypedStorage<8, 8, ::Bedrock::Memory::IMemoryAllocator*> mAllocator;
    ::ll::TypedStorage<8, 8, char*>                                mInSituBuffer;
    ::ll::TypedStorage<4, 4, uint>                                 mFixedBlockLength;
    ::ll::TypedStorage<1, 1, bool>                                 mAllowDynamicAllocation;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkefbcb8;
    ::ll::UntypedStorage<8, 8> mUnkccfa07;
    ::ll::UntypedStorage<8, 8> mUnk94aba3;
    ::ll::UntypedStorage<4, 4> mUnkb2979e;
    ::ll::UntypedStorage<1, 1> mUnk372b12;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DocumentOptions& operator=(DocumentOptions const&);
    DocumentOptions(DocumentOptions const&);
    DocumentOptions();
#endif // @header-generator platform
};

} // namespace Bedrock::JSONObject
