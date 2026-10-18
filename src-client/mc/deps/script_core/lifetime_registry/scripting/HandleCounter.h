#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ILifetimeObjectListener.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class HandleCounter : public ::Scripting::ILifetimeObjectListener {
public:
    // HandleCounter inner types declare
    // clang-format off
    struct TypeStats;
    // clang-format on

    // HandleCounter inner types define
    struct TypeStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::entt::meta_type const&> type;
        ::ll::TypedStorage<4, 4, int>                      makeObjectCount;
        ::ll::TypedStorage<4, 4, int>                      peakMakeObjectCount;
        ::ll::TypedStorage<4, 4, int>                      totalMakeObjectCount;
        ::ll::TypedStorage<8, 8, long>                     bytesUsed;
        ::ll::TypedStorage<8, 8, long>                     peakBytesUsed;
        // NOLINTEND

    public:
        // prevent constructor by default
        TypeStats& operator=(TypeStats const&);
        TypeStats(TypeStats const&);
        TypeStats();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 40>                  mStats;
    ::ll::TypedStorage<8, 24, std::vector<uint>> mOrderedList;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual void onMakeObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);

    virtual void onDestroyObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);
    // clang-format on
    // NOLINTEND
};

} // namespace Scripting
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
