#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItemDataAll_Latest.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class SemVersion;
struct PackLoadInfo;
namespace Json { class Value; }
namespace Puv { class Input; }
namespace Puv { class Logger; }
namespace SharedTypes::v1_26_30 { struct ItemDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ItemComprehensiveLoadResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                mItemJson;
    ::ll::TypedStorage<8, 2336, ::ComponentItemDataAll_Latest> mPuvResult;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemComprehensiveLoadResult(::ItemComprehensiveLoadResult const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ItemComprehensiveLoadResult parse(
        ::Puv::Input const&,
        ::Puv::Logger&,
        bool const,
        ::SemVersion const&,
        ::BedrockLoadContext const*,
        ::PackLoadInfo const*,
        ::cereal::ReflectionCtx const*
    );

    MCNAPI static ::SharedTypes::v1_26_30::ItemDocument upgrade(::ItemComprehensiveLoadResult&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemComprehensiveLoadResult const&);
    // NOLINTEND
};
