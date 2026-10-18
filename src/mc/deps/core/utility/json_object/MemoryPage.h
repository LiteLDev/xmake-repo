#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Document; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::JSONObject {

class MemoryPage {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // MemoryPage inner types define
    using AllocateFn = ulong (Bedrock::JSONObject::MemoryPage::*)(ulong, ulong);

    using ForwardFn = void* (Bedrock::JSONObject::MemoryPage::*)(ulong, ulong);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::JSONObject::Document*>> mDocument;
    ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::MemoryPage*>              mPrevious;
    ::ll::TypedStorage<4, 4, uint>                                            mLength;
    ::ll::TypedStorage<4, 4, uint>                                            mPageIndex;
    ::ll::TypedStorage<8, 8, ulong>                                           mFrontPtr;
    ::ll::TypedStorage<8, 8, ulong>                                           mBackPtr;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkf74249;
    ::ll::UntypedStorage<8, 8> mUnkda6988;
    ::ll::UntypedStorage<4, 4> mUnk5d624f;
    ::ll::UntypedStorage<4, 4> mUnk165ea1;
    ::ll::UntypedStorage<8, 8> mUnk221efb;
    ::ll::UntypedStorage<8, 8> mUnkffec1b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MemoryPage& operator=(MemoryPage const&);
    MemoryPage(MemoryPage const&);
    MemoryPage();
#endif // @header-generator platform
};

} // namespace Bedrock::JSONObject
