#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/DollUrlInfo.h"
#include "mc/client/gui/oreui/ITileResourceResolver.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IPaperDollHandleFactory; }
// clang-format on

namespace OreUI {

class DollResourceResolver : public ::OreUI::ITileResourceResolver {
public:
    // DollResourceResolver inner types declare
    // clang-format off
    class Request;
    // clang-format on

    // DollResourceResolver inner types define
    class Request : public ::OreUI::ITileResourceResolver::ITileResourceRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::OreUI::DollUrlInfo> mInfo;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<GeometryAtlas::IPaperDollHandleFactory>>> mFactory;
    // NOLINTEND
};

} // namespace OreUI
