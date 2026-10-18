#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/MolangScriptArg.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/MolangVariableIndex.h"
#include "mc/util/MolangVariableMap.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class HashedString;
class RenderParams;
struct MolangEvalStackState;
#if defined(LL_PLAT_A) // @header-generator platform
struct MolangMemberArray;
#else // @header-generator platform
struct MolangScriptArg;
#endif // @header-generator platform
// clang-format on

struct MolangEvalParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                           mPC;
    ::ll::TypedStorage<8, 8, ::MolangScriptArg const*>       mRet;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>           mTempVariables;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>           mContextVariables;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>            mContinueIndexStack;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>            mBreakIndexStack;
    ::ll::TypedStorage<8, 24, std::vector<MolangScriptArg>>  mDataStack;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>            mMissingVariableOrActorIndexStack;
    ::ll::TypedStorage<8, 8, ulong>                          mPublicAccessModeStack;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<RenderParams*>> mRenderParams;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                              mPC;
    ::ll::TypedStorage<8, 8, ::MolangScriptArg const*>          mRet;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>              mTempVariables;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>              mContextVariables;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>            mContinueIndexStack;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>            mBreakIndexStack;
    ::ll::TypedStorage<8, 24, ::std::vector<::MolangScriptArg>> mDataStack;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>            mMissingVariableOrActorIndexStack;
    ::ll::TypedStorage<8, 8, uint64>                            mPublicAccessModeStack;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::RenderParams*>>  mRenderParams;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* getActorFromArg(::MolangScriptArg const&) const;
#else // @header-generator platform
    MCAPI uint64 popMissingVariableOrActorAddress(::MolangVariableIndex variableIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* getActorPtrFromPushedArray(ulong, ulong, bool&) const;
#else // @header-generator platform
    MCAPI uint64 popMissingVariableOrActorAddress(::HashedString const& variableName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong popMissingVariableOrActorAddress(::MolangVariableIndex);
#else // @header-generator platform
    MCAPI void pushReturnValue();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong popMissingVariableOrActorAddress(::HashedString const&);

    MCNAPI void pushLoopScope(ulong, ulong);

    MCNAPI void restoreStackState(::MolangEvalStackState&&);

    MCNAPI ~MolangEvalParams();
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void restoreStackState(::MolangEvalStackState&& state);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::RenderParams& mErrorRenderParams();
#else // @header-generator platform
    MCAPI static ::RenderParams& mErrorRenderParams();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangEvalParams& mThreadLocalMolangEvalParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::MolangEvalParams& mThreadLocalMolangEvalParams();
#endif // @header-generator platform
    // NOLINTEND
};
