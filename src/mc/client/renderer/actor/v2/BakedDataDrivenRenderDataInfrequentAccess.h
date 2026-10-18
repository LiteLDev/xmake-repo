#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/GeometryResourceSpan.h"
#include "mc/client/renderer/actor/v2/TextureResourceSpan.h"

struct BakedDataDrivenRenderDataInfrequentAccess {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<TextureResourceSpan>>  mTextureResourceSpans;
    ::ll::TypedStorage<8, 24, std::vector<GeometryResourceSpan>> mGeometryResourceSpans;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BakedDataDrivenRenderDataInfrequentAccess(::BakedDataDrivenRenderDataInfrequentAccess const&);

    MCNAPI ~BakedDataDrivenRenderDataInfrequentAccess();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BakedDataDrivenRenderDataInfrequentAccess const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct GeometryResourceSpan;
struct TextureResourceSpan;
// clang-format on

struct BakedDataDrivenRenderDataInfrequentAccess {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::TextureResourceSpan>>  mTextureResourceSpans;
    ::ll::TypedStorage<8, 24, ::std::vector<::GeometryResourceSpan>> mGeometryResourceSpans;
    // NOLINTEND
};
#else // @header-generator platform
struct BakedDataDrivenRenderDataInfrequentAccess {};
#endif // @header-generator platform
#endif // @header-generator platform
