#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct SystemCategory;
// clang-format on

#endif // @header-generator platform
namespace ECSModule {

struct TypeIds {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // TypeIds inner types define
    using ID = ::Bedrock::typeid_t<SystemCategory>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<2, 2> mGame;
    ::ll::UntypedStorage<2, 2> mUsedInServerPlayerMovement;
    ::ll::UntypedStorage<2, 2> mUsedInClientMovementCorrections;
    ::ll::UntypedStorage<2, 2> mEditor;
    ::ll::UntypedStorage<2, 2> mRuntimeInitialize;
    ::ll::UntypedStorage<2, 2> mActorMove;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnkd9c8cc;
    ::ll::UntypedStorage<2, 2> mUnk802757;
    ::ll::UntypedStorage<2, 2> mUnk469a06;
    ::ll::UntypedStorage<2, 2> mUnk349826;
    ::ll::UntypedStorage<2, 2> mUnk2794ca;
    ::ll::UntypedStorage<2, 2> mUnk6e03b9;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TypeIds& operator=(TypeIds const&);
    TypeIds(TypeIds const&);
    TypeIds();
#endif // @header-generator platform
};

} // namespace ECSModule
