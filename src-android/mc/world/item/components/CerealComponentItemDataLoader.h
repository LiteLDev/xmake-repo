#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
struct ComponentItemData_v1_26_0;
namespace Puv { class Input; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CerealComponentItemDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealComponentItemDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CerealComponentItemDataLoader(::BedrockLoadContext const&, ::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BedrockLoadContext const&, ::cereal::ReflectionCtx const&);
    // NOLINTEND
};
