#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ITileResourceResolver.h"
#include "mc/client/gui/oreui/ItemUrlInfo.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IItemHandleFactory; }
// clang-format on

namespace OreUI {

class ItemResourceResolver : public ::OreUI::ITileResourceResolver {
public:
    // ItemResourceResolver inner types declare
    // clang-format off
    struct Request;
    // clang-format on

    // ItemResourceResolver inner types define
    struct Request : public ::OreUI::ITileResourceResolver::ITileResourceRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::OreUI::ItemUrlInfo> mInfo;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<OreUI::IItemHandleFactory>>> mFactory;
    // NOLINTEND
};

} // namespace OreUI
