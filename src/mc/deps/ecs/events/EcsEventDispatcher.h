#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
class EcsEventDispatcher : public ::std::enable_shared_from_this<EcsEventDispatcher>,
                           public ::EnableGetWeakRef<EcsEventDispatcher> {
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct CameraActivationEvent;
struct CameraAttachToEntityInstructionEvent;
struct CameraClearInstructionEvent;
struct CameraDetachFromEntityInstructionEvent;
struct CameraFadeInstructionEvent;
struct CameraRemoveTargetInstructionEvent;
struct CameraSetFovInstructionEvent;
struct CameraSetInstructionEvent;
struct CameraSplineInstructionEvent;
struct CameraTargetInstructionEvent;
// clang-format on

class EcsEventDispatcher : public ::std::enable_shared_from_this<::EcsEventDispatcher>,
                           public ::EnableGetWeakRef<::EcsEventDispatcher> {
public:
    // EcsEventDispatcher inner types declare
    // clang-format off
    template<typename T0> struct ExpandedEvent;
    // clang-format on

    // EcsEventDispatcher inner types define
    template <typename T0>
    struct ExpandedEvent {};

    using BaseShared = ::std::enable_shared_from_this<::EcsEventDispatcher>;

    using BaseWeak = ::EnableGetWeakRef<::EcsEventDispatcher>;

    using Token = ::gsl::final_action<::std::function<void()>>;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, ::entt::basic_dispatcher<std::allocator<void>>> mDispatcher;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void update();
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::entt::dispatcher> mDispatcher;
#endif // @header-generator platform
    // NOLINTEND
};
