#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct OffscreenCaptureDescription;
struct PaperDollRenderOwnerData;
struct PaperDollUpdateOwnerData;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct OffscreenCaptureDescription;
struct PaperDollRenderOwnerData;
struct PaperDollUpdateOwnerData;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas::details {

#if defined(LL_PLAT_A) // @header-generator platform
class IPaperDollRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollRenderContext() = default;

    virtual void update(::PaperDollUpdateOwnerData const&) = 0;

    virtual void render(::PaperDollRenderOwnerData const&, ::OffscreenCaptureDescription const*, bool) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IPaperDollRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollRenderContext() = default;

    virtual void update(::PaperDollUpdateOwnerData const& data) = 0;

    virtual void render(
        ::PaperDollRenderOwnerData const&    data,
        ::OffscreenCaptureDescription const* capture,
        bool                                 isRenderingUI
    ) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IPaperDollRenderContext {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas::details
