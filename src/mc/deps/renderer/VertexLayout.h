#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/VertexFormat.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct VertexLayout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 36, ::mce::VertexFormat> mVertexFormat;
    ::ll::TypedStorage<2, 36, ::mce::VertexFormat> mAttributeFormat;
    ::ll::TypedStorage<2, 36, ::mce::VertexFormat> mGeoTypeFormat;
    ::ll::TypedStorage<1, 1, bool>                 mSplitStream;
    // NOLINTEND
};
#else // @header-generator platform
struct VertexLayout {};
#endif // @header-generator platform

} // namespace mce
