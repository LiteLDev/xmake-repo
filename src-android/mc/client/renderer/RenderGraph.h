#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace mce {

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

} // namespace mce
