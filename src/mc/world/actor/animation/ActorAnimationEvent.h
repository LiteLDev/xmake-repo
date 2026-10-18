#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class RenderParams;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ActorAnimationEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode>   mExpression;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>     mCommand;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>     mCommand;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> mCommandVersion;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>        mEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>      mEvent;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>               mTime;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ActorAnimationEvent& operator=(ActorAnimationEvent const&);
    ActorAnimationEvent(ActorAnimationEvent const&);
#else // @header-generator platform
    ActorAnimationEvent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorAnimationEvent(float, std::string const&, ::CurrentCmdVersion const, ::MolangVersion const);
#else // @header-generator platform
    MCAPI ActorAnimationEvent(
        float                     time,
        ::std::string const&      event,
        ::CurrentCmdVersion const commandVersion,
        ::MolangVersion const     molangVersion
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fire(::RenderParams&, ::Actor*) const;
#else // @header-generator platform
    MCAPI void fire(::RenderParams& renderParams, ::Actor* actor) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(float, std::string const&, ::CurrentCmdVersion const, ::MolangVersion const);
#else // @header-generator platform
    MCAPI void* $ctor(
        float                     time,
        ::std::string const&      event,
        ::CurrentCmdVersion const commandVersion,
        ::MolangVersion const     molangVersion
    );
#endif // @header-generator platform
    // NOLINTEND
};
