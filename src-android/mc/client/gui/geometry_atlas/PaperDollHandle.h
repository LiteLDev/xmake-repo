#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class PaperDollRenderer;
class PropertyBag;
// clang-format on

namespace GeometryAtlas {

class PaperDollHandle {
public:
    // PaperDollHandle inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // PaperDollHandle inner types define
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mVisitorImpl;
        ::ll::UntypedStorage<8, 16> mBag;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<GeometryAtlas::PaperDollHandle::Impl>> mImpl;
    // NOLINTEND
};

} // namespace GeometryAtlas
