#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ScreenContext;
struct FrameRenderObject;
namespace mce { class RenderStage; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderGraph {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<mce::RenderStage>>>       mRenderStages;
    ::ll::TypedStorage<8, 40, std::unordered_set<gsl::not_null<mce::RenderStage*>>> mRenderTickStages;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addRenderStage(::EyeRenderingModeBit const, std::unique_ptr<mce::RenderStage>);

    MCNAPI void addScreenToRenderGraph(::AbstractScene&, ::SubClientId const&);

    MCNAPI void cleanupRenderScreens();

    MCNAPI void cleanupRenderStage();

    MCNAPI void clearRenderGraph();

    MCNAPI bool empty() const;

    MCNAPI void preRenderUpdate(::ScreenContext&);

    MCNAPI void render(::ScreenContext&, ::FrameRenderObject const&);

    MCNAPI ~RenderGraph();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderGraph {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7d84d1;
    ::ll::UntypedStorage<8, 64> mUnk794996;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderGraph& operator=(RenderGraph const&);
    RenderGraph(RenderGraph const&);
    RenderGraph();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void preRenderUpdate(::ScreenContext& screenContext);
    // NOLINTEND
};
#else // @header-generator platform
class RenderGraph {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
