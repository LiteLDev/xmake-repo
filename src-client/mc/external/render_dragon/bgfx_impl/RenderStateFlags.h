#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::bgfximpl {

struct RenderStateFlags {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mBlendState;
    ::ll::TypedStorage<8, 8, ulong> mCullMode;
    ::ll::TypedStorage<8, 8, ulong> mDepthTest;
    ::ll::TypedStorage<8, 8, ulong> mMSAA;
    ::ll::TypedStorage<8, 8, ulong> mPrimitiveType;
    ::ll::TypedStorage<8, 8, ulong> mWriteMask;
    // NOLINTEND
};

} // namespace dragon::bgfximpl
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
