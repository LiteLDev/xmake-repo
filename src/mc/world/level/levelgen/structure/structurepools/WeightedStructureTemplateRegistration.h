#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/Projection.h"

// auto generated forward declare list
// clang-format off
class StructurePoolElement;
struct StructureTemplateRegistrationContext;
// clang-format on

struct WeightedStructureTemplateRegistration {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mElementFactory;
    ::ll::UntypedStorage<4, 16> mWeight;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::StructurePoolElement const&(::StructureTemplateRegistrationContext, ::Projection)>>
                                  mElementFactory;
    ::ll::TypedStorage<4, 4, int> mWeight;
#endif // @header-generator platform
    // NOLINTEND
};
