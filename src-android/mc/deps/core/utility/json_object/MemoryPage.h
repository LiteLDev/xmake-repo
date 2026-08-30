#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Document; }
// clang-format on

namespace Bedrock::JSONObject {

class MemoryPage {
public:
    // MemoryPage inner types define
    using AllocateFn = ulong (Bedrock::JSONObject::MemoryPage::*)(ulong, ulong);

    using ForwardFn = void* (Bedrock::JSONObject::MemoryPage::*)(ulong, ulong);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::JSONObject::Document*>> mDocument;
    ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::MemoryPage*>              mPrevious;
    ::ll::TypedStorage<4, 4, uint>                                            mLength;
    ::ll::TypedStorage<4, 4, uint>                                            mPageIndex;
    ::ll::TypedStorage<8, 8, ulong>                                           mFrontPtr;
    ::ll::TypedStorage<8, 8, ulong>                                           mBackPtr;
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
